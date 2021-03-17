/*
Copyright (c) 2018 LeRoy Miller

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses>

If you find this or any of my projects useful or enjoyable please support me.  
Anything I do get goes to buy more parts and make more/better projects.  
https://www.patreon.com/kd8bxp  
https://ko-fi.com/lfmiller  

https://github.com/kd8bxp
https://www.youtube.com/channel/UCP6Vh4hfyJF288MTaRAF36w  
https://kd8bxp.blogspot.com/  
*/

String test = "D: 23.43m, 239";
int temp1, temp2, temp3;
float meter;

void setup() {
  Serial.begin(9600);
  Serial.print("Original String: ");
  Serial.println(test);
  test.remove(test.indexOf("m"));
  test.remove(0,3);
  char str_array[test.length()];
  test.toCharArray(str_array, test.length()+1);
  sscanf(str_array, "%d.%d",&temp1,&temp2);
  
meter = atof(str_array);
Serial.print("This is a float: ");
Serial.println(meter);
Serial.print("This is a String after using remove: ");
Serial.println(test);
Serial.print("This is Temp1 after sscanf: ");
Serial.println(temp1);
Serial.print("This is Temp2 after sscanf: ");
Serial.println(temp2);

}

void loop() {
  

}
