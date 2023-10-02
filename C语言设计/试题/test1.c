#include <stdio.h>

void main()
{
  int i, n = 0;
  for (i = 2; i < 5; i++)
  {
    do
    {
      if (i % 3)
        continue;
      // printf("走了i=%d\n", i);
      n++;
      printf("走了i=%d,n=%d\n", i, n);
    } while (!i);
    printf("经过\n");
    n++;
  }
  printf("n=%d\n", n);
}