#include <VariableConversion.h>
void setup() {
 Serial.begin(9600);
 unsigned int InNum  = 60000;
 byte  Byte[4];
 unsigned int OutNum;
 
Serial.print("In:");
Serial.println(InNum);

Serial.println("------Split------>");
UintToByte(InNum,Byte);   //unsigned int split 2 byte
Serial.print("OUT:");
Serial.print(Byte[0]);
Serial.print(",");
Serial.println(Byte[1]);

Serial.println("------Merge------>");
ByteToUint(OutNum,Byte);  //2 byte merge unsigned int  
Serial.print("OUT:");
Serial.println(OutNum);
}

void loop() {

}