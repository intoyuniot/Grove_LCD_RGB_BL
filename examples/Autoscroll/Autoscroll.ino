#include <Grove_LCD_RGB_BL.h>

Grove_LCD_RGB_BL lcd;

void setup()
{
    //设置LCD屏的列数和行数
    lcd.begin(16, 2);
}

void loop()
{
    //设置LCD屏的当前坐标
    lcd.setCursor(0, 0);
    //显示数字0-9
    for (int thisChar = 0; thisChar < 10; thisChar++)
    {
        lcd.print(thisChar);
        delay(500);
    }
    //设置LCD屏的当前坐标
    lcd.setCursor(16,1);
    //设置显示滚动
    lcd.autoscroll();
    //显示数字0-9
    for (int thisChar = 0; thisChar < 10; thisChar++)
    {
        lcd.print(thisChar);
        delay(500);
    }
    //关闭显示滚动
    lcd.noAutoscroll();
    //清屏
    lcd.clear();
}
