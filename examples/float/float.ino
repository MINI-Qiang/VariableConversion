#include <VariableConversion.h>
void setup() {
 Serial.begin(9600);
 float InNum  = -100.0;
 byte  Byte[4];
 float OutNum;
 
Serial.print("In:");
Serial.println(InNum);

Serial.println("------Split------>");
FloatToByte(InNum,Byte);   //float split 4 byte
Serial.print("OUT:");
Serial.print(Byte[0]);
Serial.print(",");
Serial.print(Byte[1]);
Serial.print(",");
Serial.print(Byte[2]);
Serial.print(",");
Serial.println(Byte[3]);

Serial.println("------Merge------>");
ByteToFloat(OutNum,Byte);  //4 byte merge float  
Serial.print("OUT:");
Serial.println(OutNum);
}

void loop() {

}