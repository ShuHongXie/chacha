#include <stdio.h>

getMax(int a, int b)
{
  return a + b;
}
void main()
{
  // int t, a, b, i;
  // for (i = 1; i <= 3; i++)
  // {
  //   scanf("%d%d", &a, &b);
  //   if (a > b)
  //   {
  //     t = a - b;
  //   }
  //   else if (a = b)
  //   {
  //     t = 1;
  //   }
  //   else
  //   {
  //     t = b - a;
  //   }
  //   printf("%d", t);
  // }

  int a = 3, b = 4, c;
  c = getMax(a, b);
  printf("%d", c);
}