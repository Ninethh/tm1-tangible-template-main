
#include <FastLED.h>

#define NUM_LEDS 60
#define DATA_PIN 6
#define BUTTON 8
#define BUZZER 2

CRGB leds[NUM_LEDS];

#define WAITING 0
#define LOADING 1
#define FAILED 2
#define SUCCESS 3

int state = WAITING;
int lastButtonState = HIGH;

int ledPosition = 0;
unsigned long previousMillis = 0;
const int loadingSpeed = 100;

int hue = 0;

const int waitingSound = 500;
const int failedSound = 262;
const int successSound = 100;

void playWaitingSound() {
  tone(BUZZER, waitingSound, 150);
}

void playFailedSound() {
  tone(BUZZER, failedSound, 1000);
}

void playSuccessSound() {
  tone(BUZZER, successSound, 300);
}

void setup() {

  Serial.begin(9600);

  pinMode(BUTTON, INPUT_PULLUP);
  pinMode(BUZZER, OUTPUT);

  FastLED.addLeds<WS2812B, DATA_PIN, GRB>(leds, NUM_LEDS);
  FastLED.setBrightness(50);

  playWaitingSound();
}


void loop() {

  int buttonState = digitalRead(BUTTON);

  bool buttonPressed =
    (buttonState == LOW && lastButtonState == HIGH);

  bool buttonReleased =
    (buttonState == HIGH && lastButtonState == LOW);


  switch (state) {
    case WAITING:
      EVERY_N_MILLISECONDS(20) {
        uint8_t brightness = beatsin8(30, 20, 150);
        fill_solid(leds, NUM_LEDS,CHSV(160, 255, brightness));
      }

      if (buttonPressed) {
        state = LOADING;
        ledPosition = 0;
        previousMillis = millis();
        FastLED.clear();
        Serial.println("LOADING");
      }

      break;

    case LOADING:
      if (buttonReleased) {
        state = FAILED;
        fill_solid(leds, NUM_LEDS, CRGB::Red);
        playFailedSound();
        Serial.println("FAILED");

      }

      else if (millis() - previousMillis >= loadingSpeed) {
        previousMillis = millis();
        if (ledPosition < NUM_LEDS) {
          leds[ledPosition] = CRGB(255, 255, 0);
          ledPosition++;

        }
        if (ledPosition >= NUM_LEDS) {
          state = SUCCESS;
          fill_solid(leds, NUM_LEDS, CRGB::Green);
          playSuccessSound();
          Serial.println("SUCCESS");

        }

      }

      break;

    case FAILED:
      if (buttonPressed) {
        state = WAITING;
        playWaitingSound();
      }

      break;

    case SUCCESS:
      if (buttonPressed) {
        state = WAITING;
        playWaitingSound();

      }

      break;

  }

  FastLED.show();

  lastButtonState = buttonState;

}

