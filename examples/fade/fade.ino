#include <Grove_LCD_RGB_BL.h>

Grove_LCD_RGB_BL lcd;

void setup()
{
    //设置LCD屏的列数和行数
    lcd.begin(16, 2);
    //LCD屏显示信息
    lcd.print("fade demo");
}

//演示LCD颜色渐变
void breath(unsigned char color)
{
    for(int i=0; i<255; i++)
    {
        lcd.setPWM(color, i);
        delay(5);
    }

    delay(500);
    for(int i=254; i>=0; i--)
    {
        lcd.setPWM(color, i);
        delay(5);
    }

    delay(500);
}

void loop()
{
    breath(REG_RED);
    breath(REG_GREEN);
    breath(REG_BLUE);
}
