#include <stdio.h>

// ��getchar�������������ַ���c1��c2��Ȼ��ֱ���putchar������printf��������������ַ�
// ˼��һ�����⣺1.c1��c2Ӧ����Ϊ�ַ��ͻ����ͣ�����߽Կɣ� ����С�ڵ���127��������߽Կɣ�����127��ҪΪ�ַ���
// 2. Ҫ�����c1��c2ֵ��ASCII��Ӧ��δ���?��putchar����printf? printf�������%d
// 3. ���ͱ������ַ������Ƿ����κ�����¶����Ի����������char c1,c2; ��int c1,c2; С�ڵ���127������£����߿��Ի����滻
void main()
{
    char c1, c2;
    c1 = getchar();
    c2 = getchar();
    putchar(c1);
    putchar(c2);
    printf("\n");
    printf("c1=%d,c2=%d", c1, c2);
}