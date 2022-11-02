//ALYZZA MAE G. CARIAS BSCpE-4A
// C++ code
//First In, First Out - FIFO


int del = 200; //defining delay value (0.2 second)
void setup() 
{
  pinMode(2, OUTPUT);  //set port 2 to OUTPUT
  pinMode(3, OUTPUT);  //set port 3 to OUTPUT
  pinMode(5, OUTPUT);  //set port 5 to OUTPUT
  pinMode(7, OUTPUT);  //set port 7 to OUTPUT
  pinMode(9, OUTPUT);  //set port 9 to OUTPUT
  pinMode(11, OUTPUT); //set port 11 to OUTPUT
  pinMode(13, OUTPUT); //set port 13 to OUTPUT
}

void loop() 
{
  digitalWrite(2, HIGH); //Switch ON LED connected output 2
  delay(7000); // Wait for 7000 millisecond(s)
  digitalWrite(2, LOW); //Switch OFF LED connected output 2
  delay(del); // Wait for 200 millisecond(s)
  digitalWrite(3, HIGH); //Switch ON LED connected output 3
  delay(5000); // Wait for 5000 millisecond(s)
  digitalWrite(3, LOW); //Switch OFF LED connected output 3
  delay(del); // Wait for 200 millisecond(s)
  digitalWrite(5, HIGH); //Switch ON LED connected output 5
  delay(8000); // Wait for 8000 millisecond(s)
  digitalWrite(5, LOW); //Switch OFF LED connected output 5
  delay(del); // Wait for 200 millisecond(s)
  digitalWrite(7, HIGH); //Switch ON LED connected output 7
  delay(3000); // Wait for 3000 millisecond(s)
  digitalWrite(7, LOW); //Switch OFF LED connected output 7
  delay(del); // Wait for 200 millisecond(s)
  digitalWrite(9, HIGH); //Switch ON LED connected output 9
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(9, LOW); //Switch OFF LED connected output 9
  delay(del); // Wait for 200 millisecond(s)
  digitalWrite(11, HIGH); //Switch ON LED connected output 11
  delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(11, LOW); //Switch OFF LED connected output 11
  delay(del); // Wait for 200 millisecond(s)
  digitalWrite(13, HIGH); //Switch ON LED connected output 13
  delay(4000); // Wait for 4000 millisecond(s)
  digitalWrite(13, LOW); //Switch OFF LED connected output 13
  delay(del); // Wait for 200 millisecond(s)
}