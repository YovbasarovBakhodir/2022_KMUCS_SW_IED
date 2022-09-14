#define PIN_LED 13 // == int PIN_LED = 13; assign variable 
unsigned int count, toggle; // initialized global variable

void setup() { // special function (setup: run only once at initial)
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200); // Use Serial Monitor
  while (!Serial) {
    // Serial.write(
  }
  toggle = HIGH;
}

void loop() { // special function (loop: run forever after setup() 
  Serial.println(++count);
  digitalWrite(PIN_LED, toggle);
  delay(1000); // 1000 milli seconds
  toggle = toggle_state(toggle); // toggle = LOW or HIGH
}

int toggle_state(int toggle) {
  if (toggle == HIGH) {
    return LOW;
  } else {
    return HIGH;
  }
}
