#include <stdio.h>
#include <math.h>

/**
 * 给一个不多于5位的正整数，
 * 1.求出它是几位数
 * 2.分别输出每一位数字;
 * 3.按逆序输出各位数字，例如原数为321，应输出123;
 */

void main()
{
    int getNumberCount(int num);
    int getYu(int num);
    int getOrder(double num, int count);
    int num;
    printf("请输入一个不多于5位的正整数");
    scanf("%d", &num);
    // 1
    int final = getNumberCount(num);
    printf("当前位数为%d\n", final);
    // 2
    getOrder((double)num, --final);
    printf("\n");
    // 3
    getYu(num);
}

// 获取位数
int getNumberCount(int num)
{
    int count = 1;
    for (int i = 10; num >= i; num = num / i)
    {
        ++count;
    }
    return count;
}

// 获取正序
int getOrder(double num, int count)
{
    double translateNumber = (double)num / pow(10, count);
    double x, fractpart, intpart;
    // 用当前位数除以小数点，达到去除最高位的效果
    fractpart = modf((double)translateNumber, &intpart);
    num = fractpart * pow(10, count);
    printf("%d\n", (int)translateNumber);
    // printf("%lf,%lf\n", translateNumber, num);
    // printf("%lf\n", num);
    double yu = (int)num % 10;
    if (num >= 10)
    {
        getOrder(num, --count);
    }
    else
    {
        printf("%.0lf\n", num);
    }
}

// 取余反转
int getYu(int num)
{
    int yu = num % 10;
    num = num / 10;
    printf("%d", yu);
    if (num > 0)
    {
        getYu(num);
    }
}