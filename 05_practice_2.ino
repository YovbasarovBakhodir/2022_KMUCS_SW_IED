#define PIN_LED 7 // == int PIN_LED = 7; assign variable

int count; // initialized global veriable
bool light;
bool initiated;

void setup() { // special function (setup; run only once at initial)
  pinMode(PIN_LED,OUTPUT);
  // put your setup code here, to run once:
  light = HIGH;
  initiated = false;
}

void loop() {
  // put your main code here, to run repeatedly:

  if (!initiated) {
    digitalWrite(PIN_LED, LOW);
    delay(1000);
    
    int n = 10;
    while (n--) {
      light = !light;
      digitalWrite(PIN_LED, light);
      delay(100); // light on for 1 second
    }
    initiated = true;
  
  }
  
}
