#include <Grove_LCD_RGB_BL.h>

Grove_LCD_RGB_BL lcd;

int thisChar = 'a';

void setup()
{
    //设置LCD屏的列数和行数
    lcd.begin(16, 2);
    //打开闪动光标
    lcd.cursor();
}

void loop()
{
    //从'm'开始反方向
    if (thisChar == 'm')
    {
        //下一个字符从右到左
        lcd.rightToLeft();
    }
    //从's'开始反方向
    if (thisChar == 's')
    {
        //下一个字符从左到右
        lcd.leftToRight();
    }
    //从'z'重新开始
    if (thisChar > 'z')
    {
        //跳转到 (0,0):
        lcd.home();
        //从'a'开始
        thisChar = 'a';
    }
    //显示字符
    lcd.write(thisChar);
    delay(1000);
    thisChar++;
}
