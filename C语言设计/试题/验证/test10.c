#include "stdio.h"
main()

{
  int b = 'A';
  while (b < 'H')
  {
    printf("%c,", b);
    b += 2;
  }
  printf("\n");
  do
  {
    b -= 2;
    if (b % 3 == 0)
      break;
    printf("%d,", b);
  } while (b >= 1);
  printf("\n");
}