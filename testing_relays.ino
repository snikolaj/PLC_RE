#define WRC 2
#define WR2 3
#define WR1 4
#define CLR 5

#define RELAY 6


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(WRC, OUTPUT);
  pinMode(WR2, OUTPUT);
  pinMode(WR1, OUTPUT);
  pinMode(CLR, OUTPUT);
  pinMode(RELAY, OUTPUT);

  digitalWrite(CLR, LOW);
  digitalWrite(WRC, LOW);
  digitalWrite(WR1, LOW);
  digitalWrite(WR2, LOW);
  digitalWrite(RELAY, HIGH);
  delay(1000);
}

void loop() {
  
  if(Serial.available() > 0){
    char readChar = Serial.read();
    
    if(readChar == 's'){
      digitalWrite(CLR, LOW);
      digitalWrite(CLR, HIGH);
      digitalWrite(WR1, LOW);
      digitalWrite(WR1, HIGH);
      digitalWrite(WR1, LOW);
      Serial.write(readChar);
    }

    if(readChar == 'd'){
      digitalWrite(CLR, LOW);
      digitalWrite(CLR, HIGH);
      digitalWrite(WR2, LOW);
      digitalWrite(WR2, HIGH);
      digitalWrite(WR2, LOW);
      Serial.write(readChar);
    }
  }

}
