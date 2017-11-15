#include <Grove_LCD_RGB_BL.h>

Grove_LCD_RGB_BL lcd;

void setup()
{
    //设置LCD屏的列数和行数
    lcd.begin(16, 2);
    //显示字符串
    lcd.print("hello, world!");
    delay(1000);
}

void loop()
{
    // 向屏幕左边滚动
    for (int positionCounter = 0; positionCounter < 13; positionCounter++)
    {
        lcd.scrollDisplayLeft();
        delay(150);
    }

    // 向屏幕右边滚动
    for (int positionCounter = 0; positionCounter < 29; positionCounter++)
    {
        lcd.scrollDisplayRight();
        delay(150);
    }

    // 向屏幕左边滚动
    for (int positionCounter = 0; positionCounter < 16; positionCounter++)
    {
        lcd.scrollDisplayLeft();
        delay(150);
    }

    delay(1000);
}
