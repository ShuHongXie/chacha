#include <stdio.h>
#define PI 3.1415926

int main()
{
    int toUpperCase(char str);
    int toLowerCase(char str);

    /*实型数据的输入输出*/
    // double a;
    // a = 1234.1415926;
    // printf("a=%.10f\n", a);
    // return 0;

    // 字符型数据
    // char c1 = 97, c2 = 65;
    // 大小写转换
    // char upper = toUpperCase(c1);
    // char lower = toLowerCase(c2);
    // printf("%c %c\n", upper, lower);

    // 符号常量
    // printf("%lf\n", PI);

    // 强制类型转换
    int a = 200;
    double b;
    b = (double)a;
    printf("%f\n", b);
}

// 小写转大写
int toUpperCase(char str)
{
    return str - 32;
}

int toLowerCase(char str)
{
    return str + 32;
}