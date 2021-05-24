#include <stdio.h>
#include <string.h>
#include "sensor_manager.h"

// ======== 製品配列の定義 ========

struct Product products[] = {
    {SOIL_ID, soilInit, soilRead, soilWrite}};

// ====== 共通関数の実行部分 ======
struct Product *findProduct(int productId)
{
    int arrayVolume = sizeof products / sizeof products[0];
    for (int index = 0; index < arrayVolume; index++)
    {
        if (products[index].id == productId)
        {
            struct Product *ptr = &products[index];
            return ptr;
        }
    }
    return NULL;
}

/** 製品パターンIDから目的の製品のInit関数を呼び出す */
int sensorControl(int productId)
{
    Product *targetProductPtr = findProduct(productId);

    if (targetProductPtr == NULL)
    {
        return RESULT_CODE_FAILURE;
    }

    targetProductPtr->init();

    return RESULT_CODE_SUCCESS;
};
