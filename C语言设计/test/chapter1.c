#include <stdio.h>

int main()
{
  // int a = 2, b = 3, c = 4;
  // a = b++ / 1 * 4 + b + --b;
  // printf("%d,%d\n", a, b);
  // return 0;

  // double d = 123.456789e100;
  // float f = d;
  // printf("%f", f);

  char d[] = {'c', 'h', 'i', 'n', 'a'}; // 定义为字符数组的，长度为其实际内容长度

  char str1[] = "ismyline";
  char str2[8] = "ismyline";
  printf("%d\n", sizeof(d));
  printf("%d\n", sizeof(str1)); // 9 字符数组不指定长度时，会自动加上\0，长度会从8变成9
  printf("%d\n", sizeof(str2));

  int i = 11;
  printf("%d", i++);
  printf("%d\n", i);

  printf("%e\n", 1235.2321);
  int a = 2, b = 0;
  printf("%d", a && b);
}