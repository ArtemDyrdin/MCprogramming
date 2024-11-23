// C++ code
//
/*
  Полицейская мигалка
*/

boolean buttonWasUp = false;
boolean ledEnabled = false;
boolean lighting_was = false;
unsigned long timing = millis();
boolean led_red = true;

void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(2, INPUT_PULLUP);
}
 
void loop() {
  if (!digitalRead(2)) {
  	buttonWasUp = true;
  } else if (digitalRead(2) && buttonWasUp) {
    ledEnabled = !ledEnabled;
    buttonWasUp = false;
    // если мигалки горели
    if (!ledEnabled) 
      lighting_was = true;
  }
  
  // если мигалки включены
  if (ledEnabled) {
    if (millis() - timing > 500) {
      timing = millis();
      digitalWrite(13, led_red);
      digitalWrite(12, !led_red);
      led_red = !led_red;
    }
  }
  
  // если мигалки выключены
  if (lighting_was) {
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    lighting_was = false;
  }
}
