SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);
int knobValue;

void setup() {
  pinMode(A0, INPUT);
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(D4, OUTPUT);
}

void loop() {
 knobValue= analogRead(A0);

 if(knobValue<1365) {
  digitalWrite(D2, HIGH);
  digitalWrite(D3,LOW);
  digitalWrite(D4, LOW);
 }
 else if(knobValue>2730) {
  digitalWrite(D2, LOW);
  digitalWrite(D3,LOW);
  digitalWrite(D4, HIGH);
 }
 else {
  digitalWrite(D2, LOW);
  digitalWrite(D3,HIGH);
  digitalWrite(D4, LOW);
 }
 Serial.println(knobValue);   
 Serial.begin(9600); 
}