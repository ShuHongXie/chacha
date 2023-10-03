#include <stdio.h>

void main()
{
  int f(int n);
  int sec;
  scanf("%d", &sec);
  printf("%d", sec);
  int num = f(sec);
  printf("%d", num);
}

int f(int n)
{
  printf("½øÈë");
  if (n == 1 || n == 2)
  {
    return 1;
  }
  return f(n - 2) + f(n - 1);
}