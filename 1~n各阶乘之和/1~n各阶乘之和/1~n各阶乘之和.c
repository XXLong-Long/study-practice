#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int n = 0;
	int i = 0;
	//int j = 0;
	int ret = 1;
	int sum = 0;
	scanf("%d", &n);

	/*for (i = 1; i <= n; i++) 
	{
		int s = 1;
		for (j = 1; j <= i; j++)
			s = s * j;
		sum = sum + s;
	}*/

	for (i = 1; i <= n; i++)
	{
		ret *= i;
		sum += ret;
	}
	printf("%d\n", sum);

	return 0;
}