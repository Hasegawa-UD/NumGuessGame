#include"input.h"
#include"judge.h"
#include <stdbool.h>

int main()
{
    // 全体のクリア判定
    bool GameClear = false;
    // ランダム乱数生成
    int randomNuber = GetRandom(0, 9);
    while (GameClear == false)
    {
        // 入力
        int addNumber = AddNumber();

        // ランダムな数と入力した数を比較
        Comparison(randomNuber, addNumber);

        // 1 (クリア判定)を返されたら GameClear を true にする。
        if (Comparison(randomNuber, addNumber) == 0)
        {
            GameClear = true;
        }
        else
        {
            GameClear = false;
        }
        // 結果表示
        Result(randomNuber, addNumber, GameClear);
    }
}