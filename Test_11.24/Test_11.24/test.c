#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//2.利用二分法找下标

int binary_search(int a[], int k, int s)
{
	int left = 0;
	int right = s - 1;

	while (left <= right)
	{
		int mid = (left + right) / 2;

		if (k < a[mid])
			right = mid - 1;
		else if (k > a[mid])
			left = mid + 1;
		else
			return mid;
	}
	return -1;
}


int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int key = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//找到了就返回下标位置
	//找不到就返回-1
	//数组arr传参，实际传递的不是数组本身，仅仅传过去了数组首元素的地址 
	int ret = binary_search(arr, key, sz);

	if (-1 == ret)
		printf("找不到了");
	else
		printf("找到了 下标为%d ", ret);
	return 0;
}