#include <stdio.h>

void main()
{

    int i, I, sum = 0;
    // i = 1;

    // �ۼӣ�ʹ��while
    // while (i <= 100)
    // {
    //     sum += i;
    //     i++;
    // }

    // �ۼӣ�ʹ��do while
    // do
    // {
    //     sum += i;
    //     i++;
    // } while (i <= 100);

    // �ۼӣ�ʹ��for
    // for (i = 1; i <= 100; i++)
    // {
    //     sum += i;
    // }
    // printf("�ۼӺ��ֵΪ��%d\n", sum);

    // while��do...whileѭ���Ƚ�
    scanf("%d", &i);
    while (i <= 10)
    {
        sum = sum + i;
        i++;
    }
    printf("sum=%d\n", sum);
}