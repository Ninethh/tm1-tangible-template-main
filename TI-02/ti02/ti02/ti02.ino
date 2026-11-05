const int LED_PIN = 10;
const int BUTTON_PIN = 8;

int brightness = 0; 
int fadeAmount = 75;
bool on = false;
int lastState = HIGH;

void setup() {
  Serial.begin(9600);

  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
}

void loop() {


  int v = analogRead(A0);

  int level = map(v, 0, 1023, 0, 255);


  int state = digitalRead(BUTTON_PIN);

  if (lastState == HIGH && state == LOW) {
    on = !on;
    delay(30); // debounce
    
    if (on == false) {
      for (int brightness = level; brightness >= 0; brightness--) {
        analogWrite(LED_PIN, brightness);
        delay(10);
      }

    }

  }

  lastState = state;


  if (on) {
    analogWrite(LED_PIN, level);
  } else {
    analogWrite(LED_PIN, 0);
  }

  Serial.print(" V: ");
  Serial.print(v);

  Serial.print(" LEVEL: ");
  Serial.print(level);

  Serial.print(" nivell: ");
  Serial.println(on ? "ON" : "OFF");

  delay(20);
}