// Define what pin we're reading into - you can change this, but remember the port 
// in this code has to be the same port your breadboard is plugged into!
int sensorPin = A0;
int sensorValue = 0;

// This section runs once when we switch the Arduino on
void setup() {
  // Tell our serial port how fast to read data
  Serial.begin(9600);

  // Tell sensor pin to look for a signal
  pinMode(sensorPin, INPUT); 
}

// This section runs over and over, forever.
void loop() {
  // Read the voltage at the sensor pin (probably A0, unless you've changed it!)
  sensorValue = analogRead(sensorPin);

  // Send the voltage at the sensor pin to the computer.
  Serial.println(sensorValue);
  delay(10);
}
