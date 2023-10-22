#include <stdio.h>

void main()
{
  int i, k = 0, s = 0;
  for (i = 1; i <= 4; i++)
  {
    switch (i % 4)
    {
    case 0:
    case 1:
      s += i;
      break;
    case 2:
    case 3:
      s -= i;
      break;
    }
    printf("%d,%d\n", s, k);
    k += s;
    printf("%d,\n", k);
  }
  printf("%d", k);
}