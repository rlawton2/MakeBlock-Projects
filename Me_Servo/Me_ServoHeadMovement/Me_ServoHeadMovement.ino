/**
 * 
 * @file    Me_ServoHeadMovement.ino
 * @author  Ron Lawton
 * @version V1.0.0
 * @date    2018/08/18
 * @brief   Description: this file is for testing Me Servo.
 *
 *
 * \par History:
 * <pre>
 * <Author>     <Time>        <Version>      <Descr>
 * Ron Lawton   2018/08/18    1.0.0          servo movement 
 * </pre>
 */
#include <Arduino.h>
#include <Wire.h>
#include <SoftwareSerial.h>

#include <MeOrion.h>

Servo servo_3_2;
MePort port_8(8);
double dis;
MeUltrasonicSensor ultrasonic_3(3);

void servo()
{
    servo_3_2.write(90); // center head
    
}

void setup(){
    servo_3_2.attach(port_8.pin2());
    servo();
    delay(2000);
    
}

void loop(){
   // Move head right left right when objects < 20 cm   
   dis = ultrasonic_3.distanceCm();
   if((dis) < (20)){
        servo_3_2.write(135);
        delay(500);
        servo_3_2.write(45);
        delay(500);
        servo_3_2.write(135);
        delay(500);
        servo();
  }
}


