int TRIG_PIN=14;
int ECHO_PIN=13;
long duration;
int distance;
void setup(){
    Serial.begin(9600);
 pinMode(TRIG_PIN , OUTPUT);
 pinMode(ECHO_PIN , INPUT);
}

void loop() {
  Serial.println("Ultrasonic Sensor HC-SRC04 Test");
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(20);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(100);
  digitalWrite(TRIG_PIN, LOW);
  duration = pulseIn(ECHO_PIN,HIGH);
  distance = duration * 0.034 / 2;
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

}