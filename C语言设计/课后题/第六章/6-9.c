#include <stdio.h>
#include <string.h>

// 4.有一行电文，按以下规律翻译成密码 A-Z A-z B-Y b-y C-X c-x
void main()
{
    char example[10] = "Umtorhs";
    for (int i = 0; example[i] != '\0'; i++)
    {
        char str;
        if (example[i] > 64 && example[i] < 91)
        {
            example[i] = 26 - (example[i] - 64) + 64 + 1;
            printf("%c-2\n", example[i]);
        }
        else if (example[i] > 96 && example[i] < 123)
        {
            example[i] = 26 - (example[i] - 96) + 96 + 1;
        }
    }
    printf("%s\n", example);
}