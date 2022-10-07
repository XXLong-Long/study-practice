#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int n = 0;
	int i = 0;
	int sum = 1;
	scanf("%d", &n);

	for (i = 1; i < (n + 1); i++)
		sum = sum * i;

	printf("%d\n", sum);
	return 0;
}