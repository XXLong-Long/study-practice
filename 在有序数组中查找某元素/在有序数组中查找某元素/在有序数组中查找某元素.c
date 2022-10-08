#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{

	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int n = 0;
	int mid = 0;
	scanf("%d", &n);

	//获取数组左右两端的下标存入left和right
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]);

	//采用二分法进行查找
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (arr[mid] > n)
		{
			right = mid - 1;
		}
		else if (arr[mid] < n)
		{
			left = mid + 1;
		}
		else
		{
			printf("要找的数在数组第%d个位置\n", mid+1);
			break;
		}
	}

	//没有找到输出查无此数
	if (left > right)
		printf("查无此数\n");

	return 0;
}