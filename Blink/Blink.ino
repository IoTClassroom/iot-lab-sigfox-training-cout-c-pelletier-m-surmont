int brightness = 0;
int fadeAmount = 5;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  Serial.begin(9600);
  pinMode(5, OUTPUT);
}

void loop() {
  analogWrite(5, brightness);
  
  brightness = brightness + fadeAmount;

  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }

  delay(50);
}



