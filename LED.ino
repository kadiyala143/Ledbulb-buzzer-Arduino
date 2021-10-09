// Written by Sai Nikhil Kadiyala

lED bulb, Buzzer with Arduino 



int LED1 = 10;  // Connect the positive pin of first LED bulb to this pin
int LED2 = 11;  // Connect the positive pin of Second LED bulb to this pin
int LED3 = 12;  // Connect the positive pin of third LED bulb to this pin
int buzzer = 9; // Connect the positive pin of buzzer to this pin



void setup() {
  // put your setup code here, to run once:

  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:

// Method-1 

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
  

// Method -2

//analogWrite(10, 200);
//delay(200);
//analogWrite(11, 230);
}
