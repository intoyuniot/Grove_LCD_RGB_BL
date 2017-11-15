#include <Grove_LCD_RGB_BL.h>

Grove_LCD_RGB_BL lcd;

const int colorR = 255;
const int colorG = 0;
const int colorB = 0;

void setup()
{
    //设置LCD屏的列数和行数
    lcd.begin(16, 2);
    //设置背光颜色
    lcd.setRGB(colorR, colorG, colorB);
    lcd.print("hello, world!");
    delay(1000);
}

void loop()
{
    //设置当前光标位置
    lcd.setCursor(0, 1);
    //显示数字
    lcd.print(millis()/1000);

    delay(100);
}
