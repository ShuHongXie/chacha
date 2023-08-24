#include <stdio.h>

/**
 * 7.5写一个函数,将两个字符串连接,如字符串1是"BEI"，字符串2是"JING" ,连接起来是"BEIJING"。
 */
void main()
{
    char *concat(char *str1, char *str2);
    char str1[100] = "BEI";
    char str2[100] = "JING";
    char *str = concat(str1, str2);
    printf(">>>>>>>>>>>>>>>>>>>>>>>>>\n");
    for (int i = 0; *(str + i) != '\0'; i++)
    {

        printf("%c", *(str + i));
    }
}

char *concat(char *str1, char *str2)
{
    int i;
    static char str[100];
    for (i = 0; *(str1 + i) != '\0'; i++)
    {
        str[i] = *(str1 + i);
    }
    for (int j = 0; *(str2 + j) != '\0';)
    {
        str[i] = *(str2 + j);
        i++;
        j++;
    }
    printf("\n");
    return str;
}