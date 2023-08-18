#include <stdio.h>
#include <math.h>

/*
输出所有的水仙花数，所谓水仙花数是指一个3位数，其各位数字立方和等于该数本身，
 */
void main()
{
    int getYu(int num);
    printf("3位数的水仙花数为：");
    for (int i = 100; i <= 999; i++)
    {
        // 递归获取
        int num = getYu(i);
        if (num == i)
        {
            printf("%d,", num);
        }
    }
}

// 取余拿到每一位
int getYu(int num)
{
    int yu = num % 10;
    num = num / 10;
    // printf("%d\n", yu);
    // printf("%lf\n", pow((double)yu, 3));
    if (num > 0)
    {
        // printf("%lf\n", pow((double)yu, 3) + getYu(num));
        return pow((double)yu, 3) + getYu(num);
    }
    else
    {
        return pow((double)yu, 3);
    }
}