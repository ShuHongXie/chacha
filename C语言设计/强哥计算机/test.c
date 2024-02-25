#include <stdio.h>

void main()
{

  int a = 7, b = 3;
  printf("%d", a & b + a * (!a | b));
}