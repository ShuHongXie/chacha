#include <stdio.h>

/*
һ�����100m�߶��������£�ÿ����غ�����ԭ�߶ȵ�һ�룬�����£��ٷ�����
���10�����ʱ�������������ף���10�η�����ߣ�
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
            printf("��10�η���%.2lf��\n", h);
        }
    }
    printf("����10����أ���������%.2lf��", accumulateHeight);
}