#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "input.h"
#include "judge.h"

 int answer;
 int input; 
 bool gameClear;

int main(void)
{// 0〜9の中から数値を1つランダムに抽選する
   answer = getrandom(answer); 

   gameClear = false;
   // ゲームクリアするまで繰り返す

    while (!gameClear)
	{ 
        // 数値を入力する
        input = getInput(input); 

		// 入力した数値と抽選した数値を比較して結果を表示する
        Result(answer, input);
    }
    return 0;
}

