#include <stdio.h>

int MyStrlen(char *ch)
{
  int count = 0;
  while (*ch != '\0')
  {
    ch++;
    count++;
  }
  return count;
}

void main()
{
  char *str = "123dsd\0dsd";
  printf("���ַ����ĳ���Ϊ%d\n", MyStrlen(str));
  printf("%d", -5 || 0);
}