#include <stdio.h>
#include <string.h>

/**
 * ��дһ�����򣬽������ַ�������������
 * 1. ��strcat����
 * 2. ����strcat����
 *
 */
void main()
{
    char str1[10000] = "My Name";
    char str2[100] = " is Shuhongxie";
    // ��strcat����
    // strcat(str1, str2);

    // ����strcat����
    int max;
    for (max = 0; str1[max] != '\0'; max++)
    {
    }
    printf("%d\n", max);
    for (int i = 0; str2[i] != '\0'; i++)
    {
        str1[max + i] = str2[i];
    }
    printf("\n");
    printf("%s\n", str1);
}