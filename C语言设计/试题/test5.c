#include <stdio.h>

void main()
{
  int a[6] = {18, 6, 7, 36, 21, 54};
  int i, j, k, t;
  for (int i = 0; i < 6; i++)
  {
    k = i;
    for (j = k + 1; j < 6; j++)
    {
      if (a[j] < a[k])
      {
        k = j;
      }
    }
    // printf("%d,%d\n", k, i);
    if (k != i)
    {
      t = a[i];
      a[i] = a[k];
      a[k] = t;
    }
    // for (int i = 0; i < 6; i++)
    // {
    //   printf("%d,", a[i]);
    // }
    // printf("\n");
  }
  for (int i = 0; i < 6; i++)
  {
    printf("%d,", a[i]);
  }
}