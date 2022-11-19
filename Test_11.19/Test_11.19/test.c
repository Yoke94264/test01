#define _CRT_SECURE_NO_WARNINGS

//将一个字符转换为ASCII码值

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    printf("输入一个字符: ");
    scanf("%c", &c);
    printf(" %c 的 ASCII 为 %d\n", c, c);
    return 0;
}



