void setup() {
  // put your setup code here, to run once:
DDRB = B111111;

}

void loop() {
  // put your main code here, to run repeatedly:
for (int i=0; i<7; i++) {
PORTB = B000001 << i ^ B100000 >> i; //^ bitwise XOR
//PORTB = B000001 << i | B100000 >>i; //this does the same as above

delay(50);
}

}
