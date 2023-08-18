#include <stdio.h>

/*
一个球从100m高度自由落下，每次落地后反跳回原高度的一半，再落下，再反弹，
求第10次落地时，共经过多少米？第10次反弹多高？
 */
void main()
{
    double h = 100, accumulateHeight = 100;
    for (int i = 1; i <= 10; i++)
    {
        h /= 2.0;
        // printf("%lf\n", h);
        accumulateHeight += h;
        if (i == 10)
        {
            printf("第10次反弹%.2lf米\n", h);
        }
    }
    printf("经过10次落地，共经过了%.2lf米", accumulateHeight);
}