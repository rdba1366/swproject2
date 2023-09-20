#define PIN_LED 7
unsigned int count, toggle;

void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(9600); 
  while (!Serial) {
    ; 
  }
  Serial.println("Hello World!");
  count = toggle = 0;
  digitalWrite(PIN_LED, LOW);
  delay(1000);
}

void loop() {
    toggle = toggle_state(toggle); 
    digitalWrite(PIN_LED, toggle);
    delay(1000);
    if (count < 10) {
      Serial.println(++count);
    }
    if (count == 10) {
      while(1){
        digitalWrite(PIN_LED, HIGH);
      }
    }
}

int toggle_state(int toggle) {
  return !toggle;
}
