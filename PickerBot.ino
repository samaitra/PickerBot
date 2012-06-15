#include <Servo.h>
Servo myservo;
const int ledPin1 = 10;
const int ledPin2 = 12;
int val;

void setup() {                
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2,OUTPUT);   
  myservo.attach(9);
  //myservo.write(90);
}

void loop() {
   forward();
   delay (5000);
   halt();
   delay(1000); 
 } 
 

void forward(){
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2,HIGH); 
  val = 600;
  val = map(val, 0, 1023, 0, 179);
  myservo.write(val); 
 }
void halt(){
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2,LOW);
  val = 0;
  val = map(val, 0, 1023, 0, 179);
  myservo.write(val);
} 
 
