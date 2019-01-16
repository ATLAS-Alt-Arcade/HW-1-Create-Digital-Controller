void setup() {
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("l-");
  delay(1000);
  Serial.print("r-");
  delay(1000);
  Serial.print("j-");
  delay(1000);
}
