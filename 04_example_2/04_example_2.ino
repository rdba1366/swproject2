void setup() {
  Serial.begin(9600);
  while (!Serial) {
    ;
  }
}

void loop() {
  Serial.println("Hello World!");
  delay(1000);
}
