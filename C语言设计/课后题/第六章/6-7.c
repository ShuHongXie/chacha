#include <stdio.h>
#include <string.h>

void main()
{
  char arr[100] = "******";
  for (int i = 0; i < 5; i++)
  {
    if (i == 0)
    {
      printf("%s\n", arr);
    }
    else if (i == 1)
    {
      char str[100] = " ";
      printf("%s\n", strcat(str, arr));
    }
    else if (i == 2)
    {
      char str[100] = "  ";
      printf("%s\n", strcat(str, arr));
    }
    else if (i == 3)
    {
      char str[100] = "   ";
      printf("%s\n", strcat(str, arr));
    }
    else if (i == 4)
    {
      char str[100] = "    ";
      printf("%s\n", strcat(str, arr));
    }
  }
}