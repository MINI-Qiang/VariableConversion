#include <VariableConversion.h>
void setup() {
 Serial.begin(9600);
 long InNum  = -400000000;
 byte  Byte[4];
 long OutNum;
 
Serial.print("In:");
Serial.println(InNum);

Serial.println("------Split------>");
LongToByte(InNum,Byte);   //long split 4 byte
Serial.print("OUT:");
Serial.print(Byte[0]);
Serial.print(",");
Serial.print(Byte[1]);
Serial.print(",");
Serial.print(Byte[2]);
Serial.print(",");
Serial.println(Byte[3]);

Serial.println("------Merge------>");
ByteToLong(OutNum,Byte);  //4 byte merge long  
Serial.print("OUT:");
Serial.println(OutNum);
}

void loop() {

}