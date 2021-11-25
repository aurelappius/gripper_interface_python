int x;

void setup() {
  Serial.begin(115200);
  Serial.setTimeout(1);
}

void loop() {
  while (!Serial.available());
  x = Serial.readString().toInt();
  if(x==1){
    Serial.print("gripping...");
    //closing gripper code here



  }
  if(x==0){
    Serial.print("releasing...");
    //opening gripper code here



  }
}
