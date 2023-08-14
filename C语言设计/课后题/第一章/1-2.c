#include <stdio.h>

int main()
{
    int compare(int a, int b, int c);
    int a, b, c;
    scanf("%d,%d,%d", &a, &b, &c);
    int max = compare(a, b, c);
    printf("最大值为=%d", max);
    return 0;
}

int compare(int a, int b, int c)
{
    int max = a;
    if (a >= b && a >= c)
    {
        max = a;
    }
    if (b >= a && b >= c)
    {
        max = b;
    }
    if (c >= a && c >= b)
    {
        max = c;
    }
    return max;
}