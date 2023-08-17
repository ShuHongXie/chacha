#include <stdio.h>

// 用getchar函数读入两个字符给c1和c2，然后分别用putchar函数和printf函数输出这两个字符
// 思考一下问题：1.c1和c2应定义为字符型或整型？或二者皆可？ 整型小于等于127情况下两者皆可，大于127需要为字符型
// 2. 要求输出c1和c2值的ASCII码应如何处理?用putchar还是printf? printf里面输出%d
// 3. 整型变量与字符变量是否在任何情况下都可以互相替代？如char c1,c2; 和int c1,c2; 小于等于127的情况下，两者可以互相替换
void main()
{
    char c1, c2;
    c1 = getchar();
    c2 = getchar();
    putchar(c1);
    putchar(c2);
    printf("\n");
    printf("c1=%d,c2=%d", c1, c2);
}