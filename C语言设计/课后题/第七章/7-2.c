#include <stdio.h>

/*
    7.2 写一个判断素数的函数,在主函数输入一个整数,输出是否素数的信息
*/
void main()
{
    int isSu(int num);
    int a;
    scanf("%d", &a);
    int isSuFlag = isSu(a);
    if (isSuFlag)
    {
        printf("%d是素数", a);
    }
    else
    {
        printf("%d不是素数", a);
    }
}

int isSu(int num)
{
    int initNum = 1;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0 && i != num)
        {
            initNum = 0;
            break;
        }
    }
    return initNum;
}