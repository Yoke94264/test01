#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//实现数组逆序输出

int main()
{
	int arr[6] = { 10,5,6,7,1,8 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int right = sz-1;
	int left = 0;
	while (left <= right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
	for (int j = 0; j < sz; j++)
	{
		printf("%d ", arr[j]);
	}
	return 0;
}