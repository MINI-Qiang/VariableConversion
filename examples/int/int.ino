#include <VariableConversion.h>
void setup() {
 Serial.begin(9600);
 int InNum  = 30000;
 byte  Byte[2];
 int OutNum;
 
Serial.print("In:");
Serial.println(InNum);

Serial.println("------Split------>");
IntToByte(InNum,Byte);   //int split 2 byte
Serial.print("OUT:");
Serial.print(Byte[0]);
Serial.print(",");
Serial.println(Byte[1]);

Serial.println("------Merge------>");
ByteToInt(OutNum,Byte);  //2 byte merge int  
Serial.print("OUT:");
Serial.println(OutNum);
}

void loop() {

}