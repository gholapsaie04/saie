int TRIG_PIN=14;
int ECHO_PIN=13;
long duration;
int distance;
void setup(){
    Serial.begin(9600);
 pinMode(TRIG_PIN , OUTPUT);
 pinMode(ECHO_PIN , INPUT);
}