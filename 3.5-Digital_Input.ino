int inPin =7;
int val =0;
int x =7;
void setup() {
    Serial.begin(9600);
    pinMode(inPin, INPUT);
    digitalRead(7);
    
}

void loop() {
  val =digitalRead(7);
  Serial.println(val);
}
