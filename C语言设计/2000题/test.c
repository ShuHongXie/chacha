#include <stdio.h>
void main()
{
  int a = 6, b = 0;
  if (a == 6)
    a = a + 2;
  b = b + 2;
  else a = a + 3;
  b = b + 3;
  printf("%d,%d\n", a, b);
}