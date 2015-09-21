int motorlone = 7;
int motorltwo = 6;
int motorrone = 5;
int motorrtwo = 4;
int sensor = 12;
   
 void setup() 
{ 
  pinMode(motorlone,OUTPUT);
  pinMode(motorltwo,OUTPUT);
  pinMode(motorrone,OUTPUT);
  pinMode(motorrtwo,OUTPUT);
  pinMode(sensor,INPUT);
  Serial.begin(9600);
  
} 
 
 void forward(){
  digitalWrite(motorlone, HIGH);
  digitalWrite(motorrone, HIGH);
  digitalWrite(motorltwo, LOW);
  digitalWrite(motorrtwo, LOW);
  delay(100);
  Serial.println("fw");
 }
 
 void backward(){
  digitalWrite(motorlone, LOW);
  digitalWrite(motorrone, LOW);
  digitalWrite(motorltwo, HIGH);
  digitalWrite(motorrtwo, HIGH);
  delay(500);
  Serial.println("bw");
 }
 
 void left(){
  digitalWrite(motorlone, HIGH);
  digitalWrite(motorrone, LOW);
  digitalWrite(motorltwo, LOW);
  digitalWrite(motorrtwo, HIGH);
  Serial.println("L");
  delay(500);
 }
 
 void right(){
  digitalWrite(motorlone, LOW);
  digitalWrite(motorrone, HIGH);
  digitalWrite(motorltwo, HIGH);
  digitalWrite(motorrtwo, LOW);
  delay(500);
  Serial.println("R");
 }
 
 
void loop() 
{ 
  if(digitalRead(sensor)==HIGH)
  {
    backward();
    right();
  }
  
  else{
    forward();
  }
  
} 
