/**
 * 
 * @file    Me_ServoTest.ino
 * @author  Ron Lawton
 * @version V1.0.0
 * @date    2018/08/18
 * @brief   Description: this file is for testing Me Servo.
 *
 *
 * \par History:
 * <pre>
 * <Author>     <Time>        <Version>      <Descr>
 * Ron Lawton   2018/08/18    1.0.0          test servo movement 
 * </pre>
 */
#include <Arduino.h>
#include <Wire.h>
#include <SoftwareSerial.h>

#include <MeOrion.h>

Servo servo_3_2;
MePort port_8(8);


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
   // Move head right to left
        servo_3_2.write(135);
        delay(800);
        servo_3_2.write(45);
        delay(800);
}


