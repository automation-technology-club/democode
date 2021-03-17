int *p;       // declare a pointer to an int data type
int i = 5;
int result = 0;

void setup() {
  p = &i;       // now 'p' contains the address of 'i'
result = *p;  // 'result' gets the value at the address pointed by 'p'
              // i.e., it gets the value of 'i' which is 5

  Serial.begin(9600);
//  Serial.print("*p = "); Serial.println(p);
  Serial.print("i = "); Serial.println(i);
  Serial.print("result = "); Serial.println(result);
}

void loop() {
  // put your main code here, to run repeatedly:

}
