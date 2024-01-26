//10个数中取最大值
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[10] = { 0 };//初始化
	int i = 0;
	for (i = 0; i < 10; i++)
	{

		scanf("%d", &arr[i]);// & 必须存在
	
	
	}
	int max = arr[0];
	for (i = 1; i < 10; i++)//i = 0 也无影响
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("%d\n", max);
	return 0;


}