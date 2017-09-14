/* 7 color flash LED Module (KY-034) [D010] : http://rdiot.tistory.com/198 [RDIoT Demo] */

int R = 2;

void setup()
{
 Serial.begin(115200);
 Serial.println("Arduino Examples - 7 Color Flash");
 pinMode(R, OUTPUT);
 digitalWrite(R, LOW);
}
 
void loop()
{
 digitalWrite(R, HIGH); // on (for 5 Second)
 delay(5000); 
}
