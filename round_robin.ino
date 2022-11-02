//ALYZZA MAE G. CARIAS BSCpE-4A
// C++ code
//Round Robin


int del = 500; //defining delay value (0.5 second)
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
  for (int i = 2; i <= 13; i++) {  // For loop will count from 2 to 13 to turn ON and OFF every single pin
    digitalWrite(i, HIGH);         // Turning ON (LED) 
    delay(1000);                   // LED is ON for 20ms before turning OFF
  }
  for (int i = 13; i >= 2; i--) {  // For loop will count from 13 to 2 to turn ON and OFF every single pin
    digitalWrite(i, HIGH);         // Turning ON (LED) 
    delay(del);                    // LED is ON for 20ms before turning OFF
    digitalWrite(i, LOW);          // Turning OFF(LED)
    delay(del);                    // Waiting 20ms before running the 2nd cycle of FOR loop
    }
}