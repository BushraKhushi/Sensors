int ir =0;
int s_Pin;

void setup() {
 
 Serial.begin(9600); 
 pinMode(ir,INPUT);
}

void loop() {

  s_Pin=digitalRead(ir);
  if(s_Pin==HIGH){
  Serial.println("Detected");
  delay(1000);
  }
  else
  Serial.println("N");
}
