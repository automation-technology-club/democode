unsigned long proslo_vrijeme = 0;        // we generaly use unsigned long for variables that save time
 
void setup() {
  pinMode(13, OUTPUT);
}
 
void loop() {
 
  unsigned long trenutno_vrijeme = millis();  // saves current time from the start of the microcontroller
 
  if (trenutno_vrijeme - proslo_vrijeme >= 100) {
    proslo_vrijeme = trenutno_vrijeme; // saves when did the LED blink last time
 
    digitalWrite(13, digitalRead(13) ^ 1); // change the state of LED
  }
}
