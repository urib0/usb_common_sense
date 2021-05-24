typedef unsigned char uchar;
typedef unsigned int uint;

#define RESULT_CODE_SUCCESS 0
#define RESULT_CODE_FAILURE 1

/** グローバル変数等の初期化関数 */
typedef int InitFn();
/** センサーデータの読み取りと生の値を加工するための関数 */
typedef int ReadFn();
/** 出力処理関数 */
typedef int WriteFn();
