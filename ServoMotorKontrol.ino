//ARDUNİO UNO İLE 


#include <Servo.h>  //Servo motor kütüphanesi
int servoPin = 9; //çıkış pini belirlenmesi (... olarak girdik)
Servo servo;//servo ismi
int Derece = A0;  // motor sıfır dereceden başlayacak
void setup()
{
  servo.attach(servoPin); //servoyu bağladığımız pinin tanımı 
}
 void loop()
 {
  for(Derece = 0; Derece < 180; Derece++)  //Motor 180 derece ileri dömesi
  {
    servo.write(Derece);   
    delay(10);
   }
   
   for(Derece = 180; Derece > 0; Derece--) // motorun 180 derece geri dönmesi
   {
    servo.write(Derece);    // servo motoruna derece değerini gönderme    
    delay(10);   // bekletme
   }
 } 
