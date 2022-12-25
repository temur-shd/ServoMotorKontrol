
/*#include <Servo.h> //kütüphanenin eklenmesi
Servo servo; //isimlendirme

void setup() { // ilk değerler ve ilk başta bir kere çalışacak kodlar
  servo.attach(9); //servoyu bağladığımız pinin tanımı 
  
}

void loop() { // devamlı tekrarlanarak sırasıyla çalışacak  kodları burada yazıyoruz
  servo.write(0);
  delay(1); //milisaniye olarak bekliyor
  servo.write(180);
  delay(1); //dönme hızını etkiliyor. 
  servo.write(0);
  delay(1);

}*/

#include <Servo.h>

Servo name_servo;

int servo_position = 0;

void setup() {

  name_servo.attach (9);

}

void loop() {

  for (servo_position = 0; servo_position <=180; servo_position +=1){

    name_servo.write(servo_position);
    delay(25);
    if (servo_position = 180)
    {
      break;
      };
  }

  for (servo_position=180; servo_position >= 0; servo_position -=1){

    name_servo.write(servo_position);
    delay(25);
    
    if (servo_position = 0)
    {
      break;
      };
  }
 
}
