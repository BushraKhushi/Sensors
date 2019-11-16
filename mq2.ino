//VCC 3V
//ANALOG

int smoke =A0;
int output;
int buzzer =D0;
int thres =15;

void setup(){
  
  Serial.begin(9600);
  pinMode(smoke,INPUT);
  pinMode(buzzer,OUTPUT);
  }

 void loop(){

  output=analogRead(smoke);
  Serial.println(output);
  if(output>thres){
    //tone(buzzer, time, freq);
    tone(buzzer, 1000, 200);
    }
  else{
    noTone(buzzer);
    delay(1000);}
    delay(1000);
    } 
