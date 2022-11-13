#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ц╟ещеепР
void bubble_sort(int arr[], int sz)
{
	for (int i = 0; i < sz-1; i++)
	{
		for (int j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j+1])
			{
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
}

int main()
{
	int arr[10] = { 5,9,8,7,22,55,66,44,11,99 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	
	bubble_sort(arr, sz);
	
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}