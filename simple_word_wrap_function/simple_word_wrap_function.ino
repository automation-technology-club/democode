
//String serialResponse = "";
char sz[] = "\"The quick brown fox jumps over the lazy dog\"";
int charCount = 0;

void setup()
{
 Serial.begin(115200);
 Serial.setTimeout(5);
 Serial.println();

   //if ( Serial.available()) {
    //serialResponse = Serial.readStringUntil('\r\n');
String serialResponse = (String)sz;
    // Convert from String Object to String.
    char buf[sizeof(sz)];
    serialResponse.toCharArray(buf, sizeof(buf));
    char *p = buf;
    char *str;
    while ((str = strtok_r(p, " ", &p)) != NULL) { // delimiter is the semicolon
      charCount += strlen(str) + 1;
      if (charCount >= 12) { /*charCount = 0;*/ charCount = strlen(str) + 1; Serial.println(); }        
       //else { 
        Serial.print(str); Serial.print(" "); } // Serial.print(strlen(str)+1); Serial.print(" "); }
     // else {charCount = 0; charCount = strlen(str) + 1; Serial.println(str); } //Serial.print(" "); }
  //Serial.print(str); Serial.print(" "); Serial.print(strlen(str)); Serial.print(" "); Serial.println(strlen(str) + 1);
  //}
  charCount = 0;
  Serial.println();
  delay(1000);
  //while(1);
}

void loop()
{

}
