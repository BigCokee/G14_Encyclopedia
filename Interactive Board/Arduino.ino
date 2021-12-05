int fsrPin0 = 0;     // A0 接口
int fsrPin1 = 1; 
int fsrPin2 = 2; 
int fsrPin3 = 3; 
int fsrReading0;
int fsrReading1;
int fsrReading2;
int fsrReading3;
int i;
int n=1000;
void setup(void) {
  Serial.begin(9600);
}
void loop(void) {
  fsrReading0 = analogRead(fsrPin0);
  //Serial.print("Analog0 reading = ");
  //Serial.println(fsrReading0);

  fsrReading1 = analogRead(fsrPin1);
  //Serial.print("Analog1 reading = ");
  //Serial.println(fsrReading1);

  fsrReading2 = analogRead(fsrPin2);
  //Serial.print("Analog2 reading = ");
  //Serial.println(fsrReading2);

  fsrReading3 = analogRead(fsrPin3);
  //Serial.print("Analog3 reading = ");
  //Serial.println(fsrReading3);
  
  if (fsrReading0 > 10) {
    i = 0;
    Serial.print(i);
    //Serial.println(" light0");
  } else if (fsrReading1 > 10) {
    i = 1;
    Serial.print(i);
    //Serial.println(" light1");
  } else if (fsrReading2 > 10) {
    i = 2;
    Serial.print(i);
    //Serial.println(" light2");
  } else if (fsrReading3 > 10) {
    i = 3;
    Serial.print(i);
    //Serial.println(" light3");
  } 

  
  //Serial.print(n);
  delay(1000);
}
