void setup() {
  // put your setup code here, to run once:
DDRB = B111111;

}

void loop() {
  // put your main code here, to run repeatedly:
for (int i=0; i<7; i++) {
PORTB = B000001 << i;
delay(50);
}
for (int i=0; i<7; i++) {
  PORTB = B100000 >> i;
  delay(50);
}
}
