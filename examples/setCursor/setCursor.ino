#include <Grove_LCD_RGB_BL.h>

Grove_LCD_RGB_BL lcd;

const int numRows = 2;
const int numCols = 16;

void setup()
{
    //设置LCD屏的列数和行数
    lcd.begin(numCols,numRows);
}

void loop()
{
    //从a -z循环显示
    for (int thisLetter = 'a'; thisLetter <= 'z'; thisLetter++)
    {
        for (int thisCol = 0; thisCol < numRows; thisCol++)
        {
            for (int thisRow = 0; thisRow < numCols; thisRow++)
            {
                lcd.setCursor(thisRow,thisCol);
                lcd.write(thisLetter);
                delay(200);
            }
        }
    }
}
