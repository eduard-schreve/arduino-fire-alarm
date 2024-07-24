int relay = 5;
int fire = 6;
int buzzer = 7;
// ^^^^^^^^^ set up which pins are being used on the arduino

void setup() {
  pinMode(relay, OUTPUT);
  pinMode(fire, INPUT);
  pinMode(buzzer, OUTPUT);
  // ^^^^^^^^^^^^^ setup the pins as inputs and outputs
}

void loop() {
  if (digitalRead(fire) == 0) { // checking if there is a fire

    digitalWrite(relay, HIGH); // this turns the relay on which in turn turns on the water pump

    digitalWrite(buzzer, HIGH); 
    delay(500);
    digitalWrite(buzzer, LOW);
    delay(500);
    // ^^^^^^ this is the code for the fire alarm

  }
  else {
    digitalWrite(relay, LOW); // turn the buzzer and relay off
    digitalWrite(buzzer, LOW);

  }
}
