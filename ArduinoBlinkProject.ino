void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop() {
  
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  delay(1000);
  
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  delay(1000);
  
  
  blinkSOS();
}

// Функция для подачи сигнала SOS
void blinkSOS() {
  // буква S (три коротких сигнала)
  for(int i = 0; i < 3; i++) {
    digitalWrite(13, HIGH);
    delay(200);
    digitalWrite(13, LOW);
    delay(200);
  }
  
  delay(500);
  //буква о
  for(int i = 0; i < 3; i++) {
    digitalWrite(13, HIGH);
    delay(600);
    digitalWrite(13, LOW);
    delay(600);
  }
  
  delay(500);  
 
  for(int i = 0; i < 3; i++) {
    digitalWrite(13, HIGH);
    delay(200);
    digitalWrite(13, LOW);
    delay(200);
  }
  
  delay(2000);  
}