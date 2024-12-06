int cnt=0;
int cnt2=0;
int i=0;
void setup() {
  Serial.begin(9600);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
}

void loop() {
  //Recbibir datos
  if(Serial.available()>0){
    char key=Serial.read();
    if(key=='1'){
      digitalWrite(8,HIGH);
      digitalWrite(9,LOW);
      digitalWrite(10,LOW);
      cnt=0;
    }
    if(key=='2'){
      digitalWrite(8,LOW);
      digitalWrite(9,HIGH); //M
      digitalWrite(10,LOW);
      cnt=0;
    }
    if(key=='3'){
      digitalWrite(8,LOW);
      digitalWrite(9,LOW);
      digitalWrite(10,HIGH);
      cnt=0;
    }
    if(key=='0'){
      digitalWrite(8,LOW);
      digitalWrite(9,LOW);
      digitalWrite(10,LOW);
      cnt=0;
    }
    if(key=='4'){
      cnt=cnt+1;
      if(cnt>=5){
        cnt2=cnt2+1;
        if (cnt2=3){
          i=0;
          while(i<=3){
            digitalWrite(8,HIGH);
            digitalWrite(9,LOW);
            digitalWrite(10,LOW);
            delay(100);
            digitalWrite(8,LOW);
            digitalWrite(9,HIGH);
            digitalWrite(10,LOW);
            delay(100);
            digitalWrite(8,LOW);
            digitalWrite(9,LOW);
            digitalWrite(10,HIGH);
            delay(100);
            i=i+1;
            cnt=0;
          }
        }
        cnt=0;
      }
    }
  }
}