/*
22 MC猜数字 - 4 switch case语句(1) if

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
  int myNumber = 3;
  if (myNumber == 1) {
    // 显示 1:
    digitalWrite(4, HIGH);
    digitalWrite(7, HIGH); 
  } 
  if (myNumber == 2) { 
    // 显示 2:
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH); 
    digitalWrite(5, HIGH); 
    digitalWrite(8, HIGH); 
    digitalWrite(9, HIGH); 
  } 
  if (myNumber == 3) { 
    // 显示 3:
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH); 
    digitalWrite(5, HIGH); 
    digitalWrite(7, HIGH); 
    digitalWrite(8, HIGH); 
  }
}
