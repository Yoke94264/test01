#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>


//º¯ÊıÄ£Äâstrlen
int my_strlen(const char* des)
{
	assert(des != NULL);
	int i = 0;
	while (*des++)
	{
		i++;
	}
	return i;
}

int main()
{
	char ch[] = "zhangsan";
	printf("%d", my_strlen(ch));
	return 0;
}