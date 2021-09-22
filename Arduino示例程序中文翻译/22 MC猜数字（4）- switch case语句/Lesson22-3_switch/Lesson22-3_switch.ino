/*
22 MC猜数字 - 4 switch case语句(3) switch

*/

void setup() {
  int pinNumber = 3;
  while(pinNumber <= 9){
    pinMode(pinNumber, OUTPUT);
    pinNumber = pinNumber + 1;
  }
}

// the loop function runs over and over again forever
void loop() {
   int myNumber = 9;
   switch(myNumber) { 
      case 1: //显示1
        digitalWrite(4, HIGH);
        digitalWrite(7, HIGH); 
        break;   
      case 2: //显示2
        digitalWrite(3, HIGH);
        digitalWrite(4, HIGH); 
        digitalWrite(5, HIGH); 
        digitalWrite(8, HIGH); 
        digitalWrite(9, HIGH); 
        break;   
      case 3: //显示3
        digitalWrite(3, HIGH);
        digitalWrite(4, HIGH); 
        digitalWrite(5, HIGH); 
        digitalWrite(7, HIGH); 
        digitalWrite(8, HIGH); 
        break;   
	  default:
        digitalWrite(4, HIGH); 
        digitalWrite(5, HIGH); 
        digitalWrite(7, HIGH); 
        digitalWrite(8, HIGH);  
        digitalWrite(9, HIGH);
    }
}
