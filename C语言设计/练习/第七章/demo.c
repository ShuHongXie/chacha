#include <stdio.h>

void main()
{
  extern int juan;
  // int i = 3, j;
  // j = i++;
  // printf("%d,%d\n", i++, j++);
  printf("%d\n", juan);
}

void prs()
{
  static int a = 2;
}

int juan = 2;