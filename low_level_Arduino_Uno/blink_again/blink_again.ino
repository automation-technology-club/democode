void setup() {
  // put your setup code here, to run once:
DDRB = B111111;
PORTB = 100000;
}

void loop() {
 PORTB = 0xff;
 _delay_ms(50);
 PORTB = 0x00;
 _delay_ms(50);
}
