const int RELAY = 13;
const int START = 12;
const int INITIAL_SPIN = 11;
const int FIRST_RPM_TIME = 10000;
const int SECOND_RPM_TIME = 30000; 

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(RELAY,OUTPUT);
  pinMode(INITIAL_SPIN,OUTPUT);
  pinMode(START,INPUT);
}

void loop() {
  while(int switchStatus = digitalRead(START)){
    delay(100);
    digitalWrite(INITIAL_SPIN,1);
    delay(FIRST_RPM_TIME);
    digitalWrite(RELAY,1);
    delay(SECOND_RPM_TIME);
    digitalWrite(INITIAL_SPIN,0);
    digitalWrite(RELAY,0);
  }
}
