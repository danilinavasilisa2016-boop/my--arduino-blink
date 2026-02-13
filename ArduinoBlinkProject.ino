void setup() {
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);  
}
 blinkSOS(){

}

  void loop() {
  blinkSOS();  // заменяем стандартный blink() на SOS
}
  digitalWrite(9, HIGH);   // LED1 ВКЛ
  digitalWrite(10, LOW);   // LED2 ВЫКЛ
  delay(500);

  digitalWrite(9, LOW);    // LED1 ВЫКЛ
  digitalWrite(10, HIGH);  // LED2 ВКЛ
  delay(500);
}
