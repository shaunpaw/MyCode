#define ENA D5    // Motor speed control (PWM)
#define IN1 D4   // Motor direction 1
#define IN2 D3 
#define IN3 D7 
  // Motor direction 2

void setup() {
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  digitalWrite(IN3,HIGH);
}

void loop() {
  // Move motor forward at half speed
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  analogWrite(ENA, 255); // PWM speed (0-255)

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