#include <stdio.h>
main()
{
  int m = 5;
  if (m++ > 5)
    printf("%d\n", m);
  else
    printf("%d\n", m++);
}