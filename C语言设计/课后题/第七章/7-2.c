#include <stdio.h>

/*
    7.2 дһ���ж������ĺ���,������������һ������,����Ƿ���������Ϣ
*/
void main()
{
    int isSu(int num);
    int a;
    scanf("%d", &a);
    int isSuFlag = isSu(a);
    if (isSuFlag)
    {
        printf("%d������", a);
    }
    else
    {
        printf("%d��������", a);
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