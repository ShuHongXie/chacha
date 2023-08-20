#include <stdio.h>
#include <string.h>

void main()
{
  char arr[100] = "******";
  char str[100] = "";
  char space[100] = " ";
  for (int i = 0; i < 5; i++)
  {
    printf("%s\n", arr);
    char s[100] = "";
    strcpy(s, space);
    strcat(s, arr);
    arr[0] = '\0'; // 置空
    strcat(arr, s);
  }
}