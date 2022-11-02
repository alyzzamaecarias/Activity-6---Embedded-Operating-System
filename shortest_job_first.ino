//ALYZZA MAE G. CARIAS BSCpE-4A
// C++ code
//Shortest Job First - SJF


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
  shortest_job(); //calling the function
}

void shortest_job(){
  int pin[7] = {2, 3, 5, 7, 9, 11, 13};
  int time[7] = {7000, 3000, 5000, 2000, 1000, 4000, 6000};
          //an array of time in milliseconds to be used in delay function
          //index 0 or the P1 has a time of 7 seconds
          //index 1 or the P2 has a time of 3 seconds
          //index 2 or the P3 has a time of 5 seconds
          //index 3 or the P4 has a time of 2 second
          //index 4 or the P5 has a time of 1 second
  		  //index 4 or the P5 has a time of 1 second
          //index 5 or the P6 has a time of 6 seconds
  
  		  //with the given burst time, the first to be executed is the P4 followed by P2, P6, P3, P1 and lastly P5
  
  int temp; //temporary value used in swapping
  
  for (int i=0; i<7; i++){
    for (int j=0; j<7; j++){
      if (time[i] < time[j]){
      	temp = time[i];
        time[i] = time[j];
        time[j] = temp;
        
        temp = pin[i];
        pin[i] = pin[j];
        pin[j] = temp;
      }
    }
  } 	//after executing this loop, the time and pin arrays will be sorted in ascending order
  
  int count = 0; //used to identify the element of time array
  while (count != 7){
  	digitalWrite(pin[count], HIGH);
    delay(time[count]);
    digitalWrite(pin[count], LOW);
    count++;
  } //executes shortest job first
}