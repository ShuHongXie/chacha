#include <stdio.h>
#include <string.h>

/**
 * 7.10写一个函数﹐用“起泡法”对输入的10个字符按由小到大顺序排列。
 */
void main()
{
    void bubbleSortReserve(char str[]);
    char str[100];
    gets(str);
    bubbleSortReserve(str);
}

void bubbleSortReserve(char str[])
{
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (str[j] < str[j + 1])
            {
                char c = str[j];
                str[j] = str[j + 1];
                str[j + 1] = c;
            }
        }
    }
    for (int i = 0; i < len; i++)
    {
        printf("%c", str[i]);
    }
}
