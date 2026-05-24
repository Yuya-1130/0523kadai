#include <stdio.h>
#include<time.h>
#include <stdlib.h>
#include "input.h"

int getrandom(int answer)
{
	int t = (int)time(nullptr);
	answer = t % 10;
	return answer;
}

int getInput(int input)
{
	input;
	scanf_s("%d", &input);
	return input;
}

	






