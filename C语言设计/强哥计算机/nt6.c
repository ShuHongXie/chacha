#include <stdio.h>

int strcmp(char *p1, char *p2)
{
  while (*p1 && *p2 && *p1 == *p2)
  {
    p1++;
    p2++;
  }
  if (!*p1 && !*p2)
  {
    return 0;
  }
  else
  {
    return *p1 - *p2;
  }
}

void main()
{
  // char str[20] = "abc";
  // char str1[20] = "abcd";
  // char *p1 = str, *p2 = str1;
  // printf("%d\n", strcmp(p1, p2));
  // int c = 0;
  // if (c == -1)
  // {
  //   printf("1");
  // }
  int i = 0;
  do
  {
    i++;
  } while (!i);
}