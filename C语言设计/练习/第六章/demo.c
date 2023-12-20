#include <stdio.h>
#include <string.h>

void main()
{
    // ???úE???§Ö???????????????????
    // int len = 8;
    // int a[len] = {1, 2, 3, 4, 5};
    // printf("%d", a[5]);

    // printf????????\0???§Ø?
    // char c[10] = "Ha\0ppy";
    // printf("%s", c);

    // ?????????
    // char str1[10], str2[10];
    // scanf("%s%s", str1, str2);
    // printf("%d", str1);

    // char c1[] = "China";
    // char c2[] = "abc";
    // char c3[] = "Abc";
    // int a = strcmp(c2, c1);
    // printf("%d", a);

    // ????3??????????§Ø????§³
    // char string[20];
    // char str[3][20];
    // int i;
    // for (i = 0; i < 3; i++)
    // {
    //     gets(str[i]);
    // }
    // if (strcmp(str[0], str[1]) > 0)
    // {
    //     strcpy(string, str[0]);
    // }
    // else
    // {
    //     strcpy(string, str[1]);
    // }
    // if (strcmp(str[2], string) > 0)
    // {
    //     strcpy(string, str[2]);
    // }
    // printf("The largest string is: %s\n", string);

    // ????????????????????§Ø????????????????????????
    // char string[100];
    // int i, num = 0, word = 0;
    // char c;
    // gets(string);
    // for (i = 0; (c = string[i]) != '\0'; i++)
    // {
    //     printf("%d\n", c == ' ');
    //     if (c == ' ')
    //     {
    //         word = 0;
    //     }
    //     else if (word == 0)
    //     {
    //         word = 1;
    //         num++;
    //     }
    // }
    // printf("There are %d words in this line,\n", num);

    // gets????
    // char s[100];
    // int c = gets(s);
    // printf("%s,%d,%d", s, strlen(s), c);

    // strcat????
    char str1[30] = "my love ";
    strcpy(str1, "shuhongxie");
    printf("%s", str1);
}