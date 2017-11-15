#include <Grove_LCD_RGB_BL.h>

Grove_LCD_RGB_BL lcd;

void setup()
{
    //设置LCD屏的列数和行数
    lcd.begin(16, 2);
    //显示字符串
    lcd.print("hello, world!");
}

void loop()
{
    //关闭下划线光标
    lcd.noCursor();
    delay(500);
    //打开下划线光标
    lcd.cursor();
    delay(500);
}
