#include <Grove_LCD_RGB_BL.h>

Grove_LCD_RGB_BL lcd;

//用户字符
byte heart[8] =
{
    0b00000,
    0b01010,
    0b11111,
    0b11111,
    0b11111,
    0b01110,
    0b00100,
    0b00000
};

byte smiley[8] =
{
    0b00000,
    0b00000,
    0b01010,
    0b00000,
    0b00000,
    0b10001,
    0b01110,
    0b00000
};

byte frownie[8] =
{
    0b00000,
    0b00000,
    0b01010,
    0b00000,
    0b00000,
    0b00000,
    0b01110,
    0b10001
};

byte armsDown[8] =
{
    0b00100,
    0b01010,
    0b00100,
    0b00100,
    0b01110,
    0b10101,
    0b00100,
    0b01010
};

byte armsUp[8] =
{
    0b00100,
    0b01010,
    0b00100,
    0b10101,
    0b01110,
    0b00100,
    0b00100,
    0b01010
};

void setup()
{
    //设置LCD屏的列数和行数
    lcd.begin(16, 2);
    // 生成一个新的字符
    lcd.createChar(0, heart);
    // 生成一个新的字符
    lcd.createChar(1, smiley);
    // 生成一个新的字符
    lcd.createChar(2, frownie);
    // 生成一个新的字符
    lcd.createChar(3, armsDown);
    // 生成一个新的字符
    lcd.createChar(4, armsUp);
    //设置当前光标位置
    lcd.setCursor(0, 0);
    //LCD屏显示信息
    lcd.print("I ");
    lcd.write((unsigned char)0);
    lcd.print(" Arduino! ");
    lcd.write(1);
}

void loop()
{
    // 读取A0引脚对应电位器
    int sensorReading = analogRead(A0);
    // 转换成200 - 1000范围的值
    int delayTime = map(sensorReading, 0, 1023, 200, 1000);
    //设置当前光标位置
    lcd.setCursor(4, 1);
    lcd.write(3);
    delay(delayTime);
    lcd.setCursor(4, 1);
    lcd.write(4);
    delay(delayTime);
}
