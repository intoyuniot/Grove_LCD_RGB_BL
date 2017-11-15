#include <Grove_LCD_RGB_BL.h>

Grove_LCD_RGB_BL lcd;

void setup()
{
    //设置LCD屏的列数和行数
    lcd.begin(16, 2);
    //初始化串口
    SerialUSB.begin(115200);
}

void loop()
{
    //串口有数据
    if (SerialUSB.available())
    {
        delay(100);
        //清屏
        lcd.clear();
        //获取串口数据
        while (SerialUSB.available() > 0)
        {
            //显示串口数据
            lcd.write(SerialUSB.read());
        }
    }
}
