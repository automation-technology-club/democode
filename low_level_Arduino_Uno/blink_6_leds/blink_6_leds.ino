void setup() {
  // put your setup code here, to run once:
DDRB = B111111; //Set PINS on Port B to OUTPUT

}

void loop() {
  // put your main code here, to run repeatedly:
PORTB = PORTB ^ B111111; //Toggle All the PINS on PORT B
delay(1000);  //customary delay for blinky....

}
