#include <stdio.h>
#include <string.h>

/**
 * 编写一个程序，将两个字符串连接起来，
 * 1. 用strcat函数
 * 2. 不用strcat函数
 *
 */
void main()
{
    char str1[10000] = "My Name";
    char str2[100] = " is Shuhongxie";
    // 用strcat函数
    // strcat(str1, str2);

    // 不用strcat函数
    int max;
    for (max = 0; str1[max] != '\0'; max++)
    {
    }
    printf("%d\n", max);
    for (int i = 0; str2[i] != '\0'; i++)
    {
        str1[max + i] = str2[i];
    }
    printf("\n");
    printf("%s\n", str1);
}