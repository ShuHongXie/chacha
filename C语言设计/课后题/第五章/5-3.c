#include <stdio.h>
#include <math.h>

/*
������е�ˮ�ɻ�������νˮ�ɻ�����ָһ��3λ�������λ���������͵��ڸ�������
 */
void main()
{
    int getYu(int num);
    printf("3λ����ˮ�ɻ���Ϊ��");
    for (int i = 100; i <= 999; i++)
    {
        // �ݹ��ȡ
        int num = getYu(i);
        if (num == i)
        {
            printf("%d,", num);
        }
    }
}

// ȡ���õ�ÿһλ
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