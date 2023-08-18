#include <stdio.h>

void main()
{

    int i, I, sum = 0;
    // i = 1;

    // 累加，使用while
    // while (i <= 100)
    // {
    //     sum += i;
    //     i++;
    // }

    // 累加，使用do while
    // do
    // {
    //     sum += i;
    //     i++;
    // } while (i <= 100);

    // 累加，使用for
    // for (i = 1; i <= 100; i++)
    // {
    //     sum += i;
    // }
    // printf("累加后的值为：%d\n", sum);

    // while和do...while循环比较
    scanf("%d", &i);
    while (i <= 10)
    {
        sum = sum + i;
        i++;
    }
    printf("sum=%d\n", sum);
}