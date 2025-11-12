int numBlinks;
String message = "Please enter number of blinks: ";
int ledPin = 9;
int blinkTime = 500;



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(message);
  while(Serial.available() == 0)
  {

  }

  numBlinks = Serial.parseInt();
  for(int i = 0; i < numBlinks; i++)
  {
    digitalWrite(ledPin, HIGH);
    delay(blinkTime);
    digitalWrite(ledPin, LOW);
    delay(blinkTime);
  }

}
