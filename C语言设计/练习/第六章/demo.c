#include <stdio.h>

void main()
{
    // 数组定义中的常量表达式不能使用变量
    // int len = 8;
    // int a[len] = {1, 2, 3, 4, 5};
    // printf("%d", a[5]);

    // printf答应时遇到\0就中断
    // char c[10] = "Ha\0ppy";
    // printf("%s", c);

    char str1[10], str2[10];
    scanf("%s%s", str1, str2);
    printf("%d", str1);
}