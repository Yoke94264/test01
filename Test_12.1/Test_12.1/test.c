#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int i = 0,j=0;
//	int score = 0;
	/*for (i = 1; i <= 5; i++)
	{
		int inresult, result;
		int n1 = rand() % 100 + 1;
		int n2 = rand() % (100 - n1);
		int n3 = rand() % 2;
		char ch[2] = { '+','-' };
		if (n1 < n2)
		{
			n3 = 0;
		}
		if (n3 == 0)
		{
			result = n1 + n2;
		}else if (n3 == 1)
		{
			result = n1 - n2;
		}
		printf("��%d��:> %d %c %d =\n", i, n1, ch[n3], n2);
		for (j = 1; j <= 2; j++)
		{
			scanf("%d", &inresult);
			if (inresult == result)
			{
				printf("��ϲ�����ˣ�\n");
				if (j == 1)
				{
					score += 20;
					break;
				}else if (j == 2)
				{
					score += 10;
					break;
				}
			}else
			{
				printf("����������:>\n");
			}
		}
		if (j == 3)
		{
			printf("��ȷ��Ϊ:%d\n", result);
		}
		printf("���ĵ÷�Ϊ:>%d\n", score);
	}*/
//	return 0;
//}

void test(int score)
{
	int i = 0, j = 0;
	for (i = 1; i <= 5; i++)
	{
		int inresult, result;
		int n1 = rand() % 100 + 1;
		int n2 = rand() % (100 - n1);
		int n3 = rand() % 2;
		char ch[2] = { '+','-' };
		if (n1 < n2)
		{
			n3 = 0;
		}
		if (n3 == 0)
		{
			result = n1 + n2;
		}
		else if (n3 == 1)
		{
			result = n1 - n2;
		}
		printf("��%d��:> %d %c %d =\n", i, n1, ch[n3], n2);
		for (j = 1; j <= 2; j++)
		{
			scanf("%d", &inresult);
			if (inresult == result)
			{
				printf("��ϲ�����ˣ�\n");
				if (j == 1)
				{
					score += 20;
					break;
				}
				else if (j == 2)
				{
					score += 10;
					break;
				}
			}
			else
			{
				printf("����������:>\n");
			}
		}
		if (j == 3)
		{
			printf("��ȷ��Ϊ:%d\n", result);
		}
		printf("���ĵ÷�Ϊ:>%d\n", score);
	}
}

int main()
{
	srand((unsigned int)time(NULL));
	int score = 0,m=0;
	while (1)
	{
		printf("----------����ѡ��----------\n");
		printf("-----------1.����-----------\n");
		printf("-------  2.�˳�����---------\n");
		scanf("%d", &m);
		switch (m)
		{
		case 1:
		{
			test(score);
		}
		case 2:
			break;
		}
		if (m == 2)
		{
			break;
		}
	}
	return 0;
}
