int solenoid = 13;

void setup() {
pinMode(solenoid, OUTPUT);
}

void loop() {
  
    if (digitalRead(2) == HIGH){     
      digitalWrite(solenoid, LOW);   
    }


    if (digitalRead(2) == LOW){     
      digitalWrite(solenoid, HIGH);   
    }
    
}
