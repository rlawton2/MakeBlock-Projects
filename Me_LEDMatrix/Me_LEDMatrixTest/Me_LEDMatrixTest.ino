/**
 * \par Copyright (C), 2012-2016, MakeBlock
 * @file    Me_LEDMatrixTest.ino
 * @author  MakeBlock
 * @version V1.0.0
 * @date    2016/01/19
 * @brief   Description: this file is sample code for Me LED Matrix device.
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
 * Mark Yan     2016/01/19    1.0.0          build the new
 * Mark Yan     2016/01/27    1.0.1          add digital printing
 * Ron Lawton   2018/08/18    1.0.2          add drawing effects to display
 * </pre>
 */
#include "MeOrion.h"

MeLEDMatrix ledMx(PORT_4);
unsigned char drawBuffer[16];   // needed 
unsigned char *drawTemp;

void setup()
{
  ledMx.setBrightness(6);
  ledMx.setColorIndex(1);
}

char *s = "AB";

void loop()
{
//  ledMx.showClock(12,03,1);
//  delay(2000);
//  ledMx.drawStr(0,7,s);
//  delay(2000);
//  ledMx.showNum(1.23);
//  delay(2000);
  drawTemp = new unsigned char[16]{0,0,60,98,94,94,60,1,1,60,94,94,98,60,0,0};
  memcpy(drawBuffer,drawTemp,16);
  free(drawTemp);
  ledMx.drawBitmap(0,0,16,drawBuffer);

}

