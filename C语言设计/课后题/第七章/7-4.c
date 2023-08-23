#include <stdio.h>
#include <string.h>

/**
 * 7.4写一个函数﹐使输入的一个字符串按反序存放,
 * 如输入"CANADA",输出"ADANAC"。在主函数中输入和输出字符串。
 */
void main()
{
  char str[1000];
  gets(str);
  printf("%s\n", str);
  int len = strlen(str);
  int middleLen = strlen(str) / 2;
  for (int i = 0; str[i] != '\0'; i++)
  {
    if (i < middleLen)
    {
      char c = str[i];
      str[i] = str[len - i - 1];
      str[len - i - 1] = c;
    }
  }
  printf("%s\n", str);
}