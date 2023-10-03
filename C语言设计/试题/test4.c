#include <stdio.h>

void main()
{
  int f(int a);
  int a = 2, i;
  for (i = 0; i < 3; i++)
  {
    printf("%4d", f(a));
  }
  return 0;
}

int f(int a)
{
  int b = 0;
  static int c = 2;
  b++;
  c++;
  return (a + b + c);
}