const int gasPin = A5; //GAS sensor output pin to Feather analog A0 pin
// Your threshold value
int sensorThres = 400;
int redLed = 13;

void setup()
{
  pinMode(redLed, OUTPUT);
  pinMode(gasPin, INPUT);
  Serial.begin(9600); //Initialize serial port - 9600 bps
}

void loop()
{
  int analogSensor = analogRead(gasPin);
  Serial.println(analogSensor);
   // Checks if it has reached the threshold value
  if (analogSensor > sensorThres)
  {
    digitalWrite(redLed, HIGH);
  }
  else
  {
    digitalWrite(redLed, LOW);
  }
  delay(1000); // Print value every 1 sec.
}
