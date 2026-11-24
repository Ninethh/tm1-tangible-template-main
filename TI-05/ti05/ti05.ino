#include <FastLED.h>

#define NUM_LEDS 4
#define DATA_PIN 6
#define BTN_NUM 4
#define BUZZER 2

#define PASSWORD_LEN 4

#define INPUT_TIMEOUT 4000
#define OPEN_TIME 2000

CRGB leds[NUM_LEDS];

unsigned long lastPressTime = 0;
unsigned long openedAt = 0;

const int BTN_PINS[BTN_NUM] = {11, 10, 9, 8};
const int PASSWORD[PASSWORD_LEN] = {0, 1, 2, 0};

const int LOCKED = 0;
const int OPEN = 1;

int state = LOCKED;
int inputCount = 0;

void setup() {
  Serial.begin(9600);

  pinMode(BUZZER, OUTPUT);

  FastLED.addLeds<WS2812B, DATA_PIN, GRB>(leds, NUM_LEDS);
  FastLED.setBrightness(50);

  for (int i = 0; i < BTN_NUM; i++) {
    pinMode(BTN_PINS[i], INPUT_PULLUP);
  }

  showLocked();
}

void loop() {

  switch (state) {

    case LOCKED: {

      if (inputCount > 0 &&
          millis() - lastPressTime >= INPUT_TIMEOUT) {

        Serial.println("TIMEOUT - TRY AGAIN");

        inputCount = 0;
        showLocked();
      }

      int btn = readButton();

      if (btn != -1) {
        checkPassword(btn);
      }

      break;
    }

    case OPEN: {
      if (millis() - openedAt >= OPEN_TIME) {

        showLocked();

        inputCount = 0;
        state = LOCKED;

        Serial.println("LOCKED");
      }

      break;
    }
  }
}

int readButton() {
  for (int i = 0; i < BTN_NUM; i++) {
    if (pressed(i)) {
      return i;
    }
  }

  return -1;
}

bool pressed(int i) {

  static bool lastReading[BTN_NUM] = {HIGH, HIGH, HIGH, HIGH};
  static bool buttonState[BTN_NUM] = {HIGH, HIGH, HIGH, HIGH};
  static unsigned long lastDebounce[BTN_NUM] = {0};

  bool reading = digitalRead(BTN_PINS[i]);

  if (reading != lastReading[i]) {
    lastDebounce[i] = millis();
  }

  if (millis() - lastDebounce[i] > 40) {

    if (reading != buttonState[i]) {

      buttonState[i] = reading;

      if (buttonState[i] == LOW) {
        lastReading[i] = reading;
        return true;
      }
    }
  }

  lastReading[i] = reading;

  return false;
}



void checkPassword(int btn) {

  playNote(btn);

  Serial.print("Button: ");
  Serial.print(btn);

  delay(200);

  if (btn == PASSWORD[inputCount]) {

    inputCount++;


    lastPressTime = millis();

    Serial.print(" | Progress: ");
    Serial.print(inputCount);
    Serial.print("/");
    Serial.println(PASSWORD_LEN);

    updateProgressLEDs();

    if (inputCount == PASSWORD_LEN) {

      soundCorrect();

      showOpen();

      openedAt = millis();
      state = OPEN;

      inputCount = 0;

      Serial.println("OPEN");
    }

  } else {

    Serial.println("WRONG PASSWORD");

    soundWrong();

    inputCount = 0;

    showLocked();
  }
}


void notaDo() {
  tone(BUZZER, 262, 180);
}

void notaRe() {
  tone(BUZZER, 294, 180);
}

void notaMi() {
  tone(BUZZER, 330, 180);
}

void notaFa() {
  tone(BUZZER, 349, 180);

}



void playNote(int btn) {

  switch (btn) {
    case 0: notaDo(); break;
    case 1: notaRe(); break;
    case 2: notaMi(); break;
    case 3: notaFa(); break;
  }
}

void soundWrong() {
  tone(BUZZER, 150, 500);
  delay(500);
}

void soundCorrect() {

  notaDo();
  delay(200);

  notaRe();
  delay(200);

  notaMi();
  delay(200);

  notaFa();
  delay(200);
}



void updateProgressLEDs() {

  fill_solid(leds, NUM_LEDS, CRGB::Red);

  for (int i = 0; i < inputCount; i++) {
    leds[i] = CRGB::Green;
  }

  FastLED.show();
}

void showLocked() {

  inputCount = 0;

  fill_solid(leds, NUM_LEDS, CRGB::Red);

  FastLED.show();
}

void showOpen() {

  fill_solid(leds, NUM_LEDS, CRGB::Green);

  FastLED.show();
}
