#include <Grove_LCD_RGB_BL.h>

Grove_LCD_RGB_BL lcd;

char dtaUart[15];
char dtaLen = 0;

void setup()
{
    SerialUSB.begin(115200);
    //设置LCD屏的列数和行数
    lcd.begin(16, 2);
    //显示字符串
    lcd.print("set cllor");
}

void loop()
{
    if(dtaLen == 11)
    {
        int r = (dtaUart[0]-'0')*100 + (dtaUart[1] - '0')*10 + (dtaUart[2] - '0');          // get r
        int g = (dtaUart[4]-'0')*100 + (dtaUart[5] - '0')*10 + (dtaUart[6] - '0');
        int b = (dtaUart[8]-'0')*100 + (dtaUart[9] - '0')*10 + (dtaUart[10] - '0');

        dtaLen = 0;

        lcd.setRGB(r, g, b);

        SerialUSB.println("get data");

        SerialUSB.println(r);
        SerialUSB.println(g);
        SerialUSB.println(b);
        SerialUSB.println();
    }
}

void serialEvent()
{
    while(SerialUSB.available())
    {
        dtaUart[dtaLen++] = SerialUSB.read();
    }
}
