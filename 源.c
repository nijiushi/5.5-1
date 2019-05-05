#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void judge_PrimeNumber(int b)
{
	int i = 2;
	for (i = 2; i < b; i++)
	{
		if (b%i == 0)
			break;
	}
	if (i == b)
	{
		printf("%d是素数", b);
	}
	else
		printf("%d不是素数", b);
}
int main()
{
	int b = 0;
	scanf("%d", &b);
	judge_PrimeNumber(b);
	system("pause");
	return 0;
}