#include <stdio.h>
#include <math.h>

/*
��100-200֮�����������
������ֻ�ܱ��Լ���1����
 */
void main()
{
    int num = 100;
    for (; num <= 200; num++)
    {
        // 2 �� ����num֮��
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