
#include <stdio.h>
#include <string.h>

int main()
{
  char str[20] = "ab\n\\0122\\\0";
  printf("%d", strlen(str));
  return 0;
}