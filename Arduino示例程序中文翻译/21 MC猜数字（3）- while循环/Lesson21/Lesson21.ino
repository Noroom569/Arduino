/*
21 MC猜数字 - 3 while循环
*/
void setup() {
  int pinNumber = 3;
  while(pinNumber <= 9){
    pinMode(pinNumber, OUTPUT);
    pinNumber = pinNumber + 1;
  }
}

void loop() {
   // 显示 1:
    digitalWrite(4, HIGH);
    digitalWrite(7, HIGH); 
    delay(500);  

  // 清理显示内容
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW); 
    digitalWrite(6, LOW); 
    digitalWrite(7, LOW); 
    digitalWrite(8, LOW); 
    digitalWrite(9, LOW); 
    delay(500);
    
  // 显示 2:
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH); 
    digitalWrite(5, HIGH); 
    digitalWrite(8, HIGH); 
    digitalWrite(9, HIGH); 
    delay(500);
      
  // 清理显示内容
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW); 
    digitalWrite(6, LOW); 
    digitalWrite(7, LOW); 
    digitalWrite(8, LOW); 
    digitalWrite(9, LOW); 
    delay(500);
       
  // 显示 3:
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH); 
    digitalWrite(5, HIGH); 
    digitalWrite(7, HIGH); 
    digitalWrite(8, HIGH); 
    delay(500);  

  // 清理显示内容
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW); 
    digitalWrite(6, LOW); 
    digitalWrite(7, LOW); 
    digitalWrite(8, LOW); 
    digitalWrite(9, LOW); 
    delay(500);
}
