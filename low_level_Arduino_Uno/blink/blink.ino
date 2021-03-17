void setup() {
  DDRB = B00100000; // portB5 (pin13) is set as output
 
  cli();   //we are disabling all interrupts, so the timer interrupt won't be distrupted by another interrupt with higher priority
  TCCR1A = 0b00000000;
  TCCR1B = 0b00000100;
  TCCR1C = 0b00000000;
  OCR1AH = 0xF4;
  OCR1AL = 0x23;
  TIMSK1 = 0b00000010;
  sei();   // we re-enable interrupts including timer interrupts
}
 
ISR(TIMER1_COMPA_vect) { // timer compare interrupt service routine
  PORTB ^= 0b00100000;   // XOR operator, if the LED is on we turn it off and vice versa
}
 
void loop() {
}
