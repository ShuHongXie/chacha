#include <stdio.h>
#include <math.h>

/**
 * ��һ��������5λ����������
 * 1.������Ǽ�λ��
 * 2.�ֱ����ÿһλ����;
 * 3.�����������λ���֣�����ԭ��Ϊ321��Ӧ���123;
 */

void main()
{
    int getNumberCount(int num);
    int getYu(int num);
    int getOrder(double num, int count);
    int num;
    printf("������һ��������5λ��������");
    scanf("%d", &num);
    // 1
    int final = getNumberCount(num);
    printf("��ǰλ��Ϊ%d\n", final);
    // 2
    getOrder((double)num, --final);
    printf("\n");
    // 3
    getYu(num);
}

// ��ȡλ��
int getNumberCount(int num)
{
    int count = 1;
    for (int i = 10; num >= i; num = num / i)
    {
        ++count;
    }
    return count;
}

// ��ȡ����
int getOrder(double num, int count)
{
    double translateNumber = (double)num / pow(10, count);
    double x, fractpart, intpart;
    // �õ�ǰλ������С���㣬�ﵽȥ�����λ��Ч��
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

// ȡ�෴ת
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