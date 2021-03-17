
float t = 78.29;
float h = 34.50;

float ta,ha;
char hex[20];

void setup() {
  Serial.begin(9600);
  Serial.println("");
  sprintf(hex,"%d.%02d %d.%02d",(int)t,(int)(t*100)%100,(int)h,(int)(h*100)%100);
  Serial.println(hex);
  int t1,t2,t3,t4;
  sscanf(hex,"%d.%d %d.%d",&t1,&t2,&t3,&t4);
  Serial.println((float)t2/100);
  Serial.println((float)t4/100);
  ta = t1 +(float)t2/100;
  ha = t3 + (float)t4/100;
  Serial.print("Ta: ");Serial.print(ta);Serial.print(" Ha: ");Serial.println(ha);
  
}

void loop() {
  // put your main code here, to run repeatedly:

}
