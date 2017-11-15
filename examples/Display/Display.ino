#include <Grove_LCD_RGB_BL.h>

Grove_LCD_RGB_BL lcd;

void setup()
{
    //设置LCD屏的列数和行数
    lcd.begin(16, 2);
    //LCD屏显示信息
    lcd.print("hello, world!");
}

void loop()
{
    // 关闭显示
    lcd.noDisplay();
    delay(500);
    // 打开显示
    lcd.display();
    delay(500);
}
