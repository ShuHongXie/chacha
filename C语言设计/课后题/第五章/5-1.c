#include <stdio.h>
#include <math.h>

/*
求100-200之间的所有素数
素数：只能被自己和1整除
 */
void main()
{
    int num = 100;
    for (; num <= 200; num++)
    {
        // 2 到 根号num之间
        int k = (int)sqrt(num);
        int j;
        for (j = 2; j <= k; j++)
        {
            if (num % j == 0)
            {
                break;
            }
        }
        // printf("j=%d,k=%d,num=%d\n", j, k, num);
        if (j > k)
        {
            printf("%d,", num);
        }
    }
}