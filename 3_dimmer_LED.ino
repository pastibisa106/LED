const int analogInPin = A0; // Analog input pin that the potentiometer is attached to
const int analogOutPin = 6; // Analog output pin that the LED is attached to pin pwm

int sensorValue = 0;        // value read from the pot
int outputValue = 0;        // value output to the PWM (analog out)

void setup() {
  Serial.begin(9600);
}

void loop() {
  // read the analog in value;
  sensorValue = analogRead(analogInPin);
  //map it to the range of the analog out;
  outputValue = map(sensorValue, 0, 1023, 0, 255);
  // change the analog out value;
  analogWrite(analogOutPin, outputValue);

  // print the results to the serial monitor
  Serial.print("Sensor = ");
  Serial.print(sensorValue);
  Serial.print(" output = ");
  Serial.print(outputValue);
  Serial.println("");

  // wait 2 miliseconds before the next loop
  // for the analog-to-digital converter to settle
  // after the last reading;
  delay(1000);

  


}
