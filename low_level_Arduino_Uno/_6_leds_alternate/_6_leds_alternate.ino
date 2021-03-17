void setup() {
  // put your setup code here, to run once:
DDRB = B111111; //Set PINS on Port B to OUTPUT

}

void loop() {
  // put your main code here, to run repeatedly:
PORTB = B101010; //Toggle All the PINS on PORT B
delay(100);  //customary delay for blinky....
PORTB = B010101;
delay(100);
}
