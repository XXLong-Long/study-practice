#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{

	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int n = 0;
	int mid = 0;
	scanf("%d", &n);

	//��ȡ�����������˵��±����left��right
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]);

	//���ö��ַ����в���
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
			printf("Ҫ�ҵ����������%d��λ��\n", mid+1);
			break;
		}
	}

	//û���ҵ�������޴���
	if (left > right)
		printf("���޴���\n");

	return 0;
}