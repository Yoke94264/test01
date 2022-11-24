#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//2.���ö��ַ����±�

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
	//�ҵ��˾ͷ����±�λ��
	//�Ҳ����ͷ���-1
	//����arr���Σ�ʵ�ʴ��ݵĲ������鱾����������ȥ��������Ԫ�صĵ�ַ 
	int ret = binary_search(arr, key, sz);

	if (-1 == ret)
		printf("�Ҳ�����");
	else
		printf("�ҵ��� �±�Ϊ%d ", ret);
	return 0;
}