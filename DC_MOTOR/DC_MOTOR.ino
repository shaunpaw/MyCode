#define ENA D5    // Motor speed control (PWM)
#define IN1 D2   // Motor direction 1
#define IN2 D1   // Motor direction 2

#define IN3 D7   // variable for the TXS0108E 
  

void setup() {
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  
  digitalWrite(IN3,HIGH);  // sets the TXS0108E to HIGH
}

void loop() {
  // Move motor forward at half speed
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  analogWrite(ENA, 128); // PWM speed (0-255)

  delay(2000);

  // Move motor backward at full speed
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  analogWrite(ENA, 255);

  delay(2000);

  // Stop motor
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  analogWrite(ENA, 0);

  delay(2000);
}
