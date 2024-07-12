int ledPin = 22;
int sensorPin = 34;
int buttonPin = 35;
bool ledIsOn = false;

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  pinMode(sensorPin, INPUT);
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(sensorPin);
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  float percentage = sensorValue * (100 / 4095.0);
  // Read button press
  int waterEmpty = digitalRead(buttonPin);
  // print out the value you read:
  Serial.print(percentage);
  Serial.print(",");
  Serial.println(waterEmpty);

  if (percentage < 40) {
    ledIsOn = true;
  }
  if (percentage > 80 || waterEmpty) {
    ledIsOn = false;
  }
  digitalWrite(ledPin, ledIsOn);

  delay(100);
}
