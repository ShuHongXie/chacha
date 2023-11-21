#include <stdio.h>

void main()
{
  int a = 100;
  int *p1 = &a;
  int **p2 = &p1;
  printf("%d", **(p2));
}