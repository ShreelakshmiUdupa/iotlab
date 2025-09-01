const int moisturePin = A0;
const int ledPin = 13;
int threshold = 600;

void setup()
{
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int moistureValue = analogRead(moisturePin);
  Serial.print("Moisture Level: ");
  Serial.println(moistureValue);

  if (moistureValue > threshold)
  {
    digitalWrite(ledPin, HIGH);
    Serial.println("Status: DRY");
  }
  else
  {
    digitalWrite(ledPin, LOW);
    Serial.println("Status: WET");
  }

  delay(1000);
}
