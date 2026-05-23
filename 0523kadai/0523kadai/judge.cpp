#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "judge.h"

// グローバル変数の宣言（必要に応じてexternに変更）
bool gameClear = false;
int answer = 0;
int input = 0;

// 判定結果を表示する関数
void Result(int answer, int input)
{
    if (answer == input)
    {
        printf("一致！\n");
        gameClear = true;
    }
    else if (answer < input)
    {
        printf("大きい！\n");
    }
    else if (answer > input)
    {
        printf("小さい！\n");
    }
    if (!gameClear)
    {
        printf("もう一度！\n\n");
    }
    else {
        printf("ゲームクリア！\n");
    }
}

// ゲーム判定関数
int j(int ans, int inp)
{
    answer = ans;
    input = inp;
    gameClear = false;

    while (!gameClear)
    {
        Result(answer, input);
        if (!gameClear)
        {
            // 入力を再取得する場合はここでinputを更新する処理を追加
             //scanf("%d", &input);
            break; // 仮でbreak（実際はループ継続のための入力処理が必要）
        }
        else {
            break;
        }
    }
    gameClear = false;
    return 0;
}