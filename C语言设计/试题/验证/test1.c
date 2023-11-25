#include <stdio.h>

int f(int a)
{
  int b = 0;
  static int c = 2;
  b++;
  c++;
  return a + b + c;
};

int main()
{
  // int f(int a);
  // int a = 2, i;
  // for (i = 0; i < 3; i++)
  // {
  //   printf("%4d", f(a));
  // }
  // int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
  // printf("%4d", *(*(a + 1)));

  char s = '0';
  if (s >= '0' && s <= '9')
  {
    printf("ÊÇÊı×Ö×Ö·û");
  }
}