
const int LED_PIN = 13;
const int LED_PIN_GREEN = 11;

const int BUZZER = 4;
int beat = 200; 

void setup() {
  // put your setup code here, to run once:



 // milliseconds
// Scale in Hz: C 262 · D 294 · E 330 · F 349
//              G 392 · A 440 · B 494 · C 523
pinMode (LED_PIN, OUTPUT); }


void loop() {
  digitalWrite(LED_PIN, HIGH);  // change state of the LED by setting the pin to the HIGH voltage level
  tone(BUZZER, 1096, beat);     // C
  delay(beat + 50);
    digitalWrite(LED_PIN, LOW);   // change state of the LED by setting the pin to the LOW voltage level

   digitalWrite(LED_PIN_GREEN, HIGH);  // change state of the LED by setting the pin to the HIGH voltage level
  tone(BUZZER, 1096, beat);     // C
  delay(beat);
    digitalWrite(LED_PIN_GREEN, LOW);   // change state of the LED by setting the pin to the LOW voltage level

 digitalWrite(LED_PIN, HIGH);  // change state of the LED by setting the pin to the HIGH voltage level
  tone(BUZZER, 1096, beat);     // C
  delay(beat);
    digitalWrite(LED_PIN, LOW);   // change state of the LED by setting the pin to the LOW voltage level


  delay(beat + beat + 100);                      // wait for a second
   
  
  }
