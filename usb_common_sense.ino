#include "./sensor_manager.h"

// ここを書き換えることで製品設定が変わる
#define PRODUCT_ID SOIL_ID

void setup()
{
    sensorControl(PRODUCT_ID);
}

void loop()
{
}
