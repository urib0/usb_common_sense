#include "typedef.h"
#include "drivers/soil.h"

// プロダクトIDの定義一覧
#define SOIL_ID 0

/** 製品の型定義(関数ポインタの入っている構造体) */
struct Product
{
    int id;
    InitFn *init;
    ReadFn *read;
    WriteFn *write;
};

int sensorControl(int productId);