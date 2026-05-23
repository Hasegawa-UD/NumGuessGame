#include<stdio.h>

int Comparison(int ranNum, int addNum)
{
	if (ranNum > addNum)
	{
		return 1;
	}
	else if (ranNum < addNum)
	{
		return 1;
	}
    else
	{
		return 0;
	}
}

void Result(int ranNum, int addNum, bool Clear)
{
	if (Clear)
	{
		printf("ゲームクリア！！うざいネ！三菱");
	}
	if (!Clear)
	{
		if (ranNum > addNum)
		{
			printf("小さい！やり直し");
		}
		if (ranNum < addNum)
		{
			printf("大きい！やり直し");
		}
	}
}