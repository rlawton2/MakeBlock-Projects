/**
 * \par Copyright (C), 2012-2016, MakeBlock
 * @file    Me_LEDMatrixTest.ino
 * @author  Ron Lawton
 * @version V1.0.0
 * @date    2018/08/18
 * @brief   Description: this file is for Me LED Matrix device to display drawn images.
 *
 * Function List:
 * 1. void MeLEDMatrix::setBrightness(uint8_t Bright);
 * 2. void MeLEDMatrix::setColorIndex(bool Color_Number);
 * 3. void MeLEDMatrix::drawStr(int16_t X_position, int8_t Y_position, const char *str);
 * 4. void MeLEDMatrix::showClock(uint8_t hour, uint8_t minute, bool point_flag)
 * 5. void void MeLEDMatrix::drawBitmap(int16_t X_position, int8_t Y_position, const char *str);
 *
 * \par History:
 * <pre>
 * <Author>     <Time>        <Version>      <Descr>
 * Ron Lawton   2018/08/18    1.0.0          add facial images 
 * </pre>
 */
#include "MeOrion.h"

MeLEDMatrix ledMx(PORT_4);
unsigned char drawBuffer[16];  
unsigned char *drawTemp;

void setup()
{
  ledMx.setBrightness(6);
  ledMx.setColorIndex(1);
}

void loop()
{
// blinking eyes with 5 sec stare
drawTemp = new unsigned char[16]{0,0,60,98,94,94,60,1,1,60,94,94,98,60,0,0};
    memcpy(drawBuffer,drawTemp,16);
    free(drawTemp);
    ledMx.drawBitmap(0,0,16,drawBuffer);
    _delay(0.2);
drawTemp = new unsigned char[16]{0,0,24,36,60,60,24,1,1,24,60,60,36,24,0,0};
    memcpy(drawBuffer,drawTemp,16);
    free(drawTemp);
    ledMx.drawBitmap(0,0,16,drawBuffer);
    _delay(0.2);
drawTemp = new unsigned char[16]{0,0,24,24,24,24,24,1,1,24,24,24,24,24,0,0};
    memcpy(drawBuffer,drawTemp,16);
    free(drawTemp);
    ledMx.drawBitmap(0,0,16,drawBuffer);
    _delay(0.2);
drawTemp = new unsigned char[16]{0,0,8,8,8,8,8,1,1,8,8,8,8,8,0,0};
    memcpy(drawBuffer,drawTemp,16);
    free(drawTemp);
    ledMx.drawBitmap(0,0,16,drawBuffer);
    _delay(0.8);
drawTemp = new unsigned char[16]{0,0,24,24,24,24,24,1,1,24,24,24,24,24,0,0};
    memcpy(drawBuffer,drawTemp,16);
    free(drawTemp);
    ledMx.drawBitmap(0,0,16,drawBuffer);
    _delay(0.2);
drawTemp = new unsigned char[16]{0,0,24,36,60,60,24,1,1,24,60,60,36,24,0,0};
    memcpy(drawBuffer,drawTemp,16);
    free(drawTemp);
    ledMx.drawBitmap(0,0,16,drawBuffer);
    _delay(0.2);
drawTemp = new unsigned char[16]{0,0,60,98,94,94,60,1,1,60,94,94,98,60,0,0};
    memcpy(drawBuffer,drawTemp,16);
    free(drawTemp);
    ledMx.drawBitmap(0,0,16,drawBuffer);
    _delay(5);
// heart eyes
drawTemp = new unsigned char[16]{0,0,48,72,36,72,48,1,1,48,72,36,72,48,0,0};
    memcpy(drawBuffer,drawTemp,16);
    free(drawTemp);
    ledMx.drawBitmap(0,0,16,drawBuffer);
    _delay(0.2);
}

void _delay(float seconds){
    long endTime = millis() + seconds * 1000;
    while(millis() < endTime)_loop();
}

void _loop(){
}

