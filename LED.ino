
int LED1 = 10;
int LED2 = 11;
int LED3 = 12;
int buzzer = 9;



void setup() {
  // put your setup code here, to run once:

  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(10, HIGH);
  tone(9, 1000);
  delay(300);
  digitalWrite(11, HIGH);
  delay(200);
  noTone(9);
  digitalWrite(12, HIGH);
  delay(200);
   noTone(9);
  digitalWrite(10, LOW);
  delay(200);
   noTone(9);
  digitalWrite(11, LOW);
  delay(200);
   noTone(9);
  digitalWrite(12, LOW);
  delay(200);
   noTone(9);
  

//analogWrite(10, 200);
//delay(200);
//analogWrite(11, 230);
}
