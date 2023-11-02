#include <stdio.h>

void main()
{
  int x = 0;
  int find = 0;
  while (!find)
  {
    if (x % 5 == 1 && x % 6 == 5 && x % 7 == 4 && x % 11 == 10)
    {
      find = 1;
    }
    x++;
  }
  printf("%d", x);
}