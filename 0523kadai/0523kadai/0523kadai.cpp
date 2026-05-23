#include <stdio.h>
#include<time.h>
#include <stdlib.h>
#include "input.h"
#include "judge.h"
extern int input;
extern int answer;
 bool gameClear = false;

int main()
{
    
    int t = time(NULL);
    // キーボードで押した数を変数 input に代入する
   
    srand((unsigned int)t);
    answer = rand() % 10;
   
    while (!gameClear)
    {
        
        scanf_s("%d", &input);

        // answer に入っている数値と、input に入っている数値が一致していれば「一致！」と表示する
        if (answer == input) {
            gameClear = true;
          
        }
        // answer に入っている数値より、input に入っている数値の方が大きければ「大きい！」と表示する
        else if (answer < input) {
		
        }
        // answer に入っている数値より、input に入っている数値の方が小さければ「小さい！」と表示する
        else if (answer > input){
           
        }
        // ゲームをクリアしていないときは「もう一度！」と表示する
        if (!gameClear) {
        }
        else {
            break;
        }
    }
	return 0;
}

