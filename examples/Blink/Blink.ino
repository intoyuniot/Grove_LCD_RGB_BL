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
    //关闭光标闪动
    lcd.noBlink();
    delay(3000);
    //打开光标闪动
    lcd.blink();
    delay(3000);
}
