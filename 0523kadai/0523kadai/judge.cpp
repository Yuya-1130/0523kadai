#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "judge.h"


bool Result(int answer, int input)
{
	gameClear = false;
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
	return gameClear;
}
