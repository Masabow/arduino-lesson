const int SENSOR = 0;
int val = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // Open serial port
                       // data transfer 9600bit per sec
}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(SENSOR);

  Serial.println(val);
  delay(100);
}
