#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int x;
	scanf(" %d", &x);
	while (x>=80)
	{
		x = x * 15;
			printf("%d", x);
		break;
	}
	while (x < 80 && x>49)
	{
		x = x * 20;
		printf("%d", x);
		break;
	}
	while (x < 50 && x>19)
	{
		x = x * 25;
		printf("%d", x);
		break;
	}
	while (x < 20)
	{
		x = x * 30;
		printf("%d", x);
		break;
	}
}
