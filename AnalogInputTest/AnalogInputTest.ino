int sensorPin = 34;   // select the input pin for the potentiometer
int ledPin = 7;      // select the pin for the LED
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(ledPin, OUTPUT);
  pinMode(sensorPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);
  Serial.print(sensorValue);
  //if (sensorValue) {

  //}
  // turn the ledPin on
  //digitalWrite(ledPin, HIGH);
  // turn the ledPin off:
  //digitalWrite(ledPin, LOW);
}
