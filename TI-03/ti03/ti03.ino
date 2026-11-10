const int LED_PINB = 9;
const int LED_PING = 10;

bool lampOn = true;

void setup() {
  Serial.begin(9600);
  pinMode(LED_PINB, OUTPUT);
  pinMode(LED_PING, OUTPUT);
}

void loop() {

  int light = analogRead(A0);
  if (lampOn && light < 10) {
    lampOn = false;
  }
  if (!lampOn && light > 20) {
    lampOn = true;
  }
  digitalWrite(LED_PINB, lampOn);

  int lo = 1023, hi = 0;
  for (int i = 0; i < 100; i++) {
    int s = analogRead(A1);
    if (s < lo) lo = s;
    if (s > hi) hi = s;
  }

  int loudness = hi - lo;
  if (lampOn && loudness > 5) {
    digitalWrite(LED_PING, HIGH);
  }
  else {
    digitalWrite(LED_PING, LOW);
  }

  Serial.print("Luz: ");
  Serial.print(light);
  Serial.print("  Sonido: ");
  Serial.println(loudness);

  delay(50);
}