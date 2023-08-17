#include <stdio.h>

void main()
{
    // int a;
    // if (true)
    // {
    //     a = 100;
    // }

    // else
    // {
    //     if (false)
    //     {
    //         a = 300;
    //     }
    //     a = 200;
    // }
    // printf("a=%d", a);

    int a = 1;
    switch (a)
    {
    case 1:
        printf("是第一");
    case 2:
        printf("是第二");
    default:
        printf("是默认");
    }
}