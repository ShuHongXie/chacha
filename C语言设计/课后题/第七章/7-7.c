#include <stdio.h>
#include <string.h>

/**
 * 7.7  ‰»Î2008 ¥Ú”° 2 0 0 8
 */
void main()
{
    void printSplitStr(char str[]);
    char str[100];
    gets(str);
    printSplitStr(str);
}

void printSplitStr(char str[100])
{
    int len = strlen(str);
    // printf("%d", len);
    for (int i = 0; str[i] != '\0'; i++)
    {
        printf("%c", str[i]);
        if (i != len)
        {
            printf(" ");
        }
    }
}