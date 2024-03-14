#include <stdio.h>
#include <math.h>

int strcmp(char *s, char *t)
{
  while (*s == *t)
  {
    if (*s == '\0')
      return 0;
    s++;
    t++;
  }
  return (*s - *t); //  ASCII
}

int main()
{
  // int arr[10];
  // int a;
  // for (int i = 0; i <= 9; i++)
  // {
  //   scanf("%d", &arr[i]);
  // }
  // scanf("%d", &a);
  // for (int i = 0; i <= 9; i++)
  // {
  //   if (arr[i] == a)
  //   {
  //     printf("%d", i + 1);
  //     return i;
  //   }
  // }
  // printf("not found");

  char *pa = "CHINA", *pb = "CANADA";
  if (strcmp(pa, pb) > 0)
    printf("%s > %s\n", pa, pb);
  else if (strcmp(pa, pb) == 0)
    printf("%s = %s\n", pa, pb);
  else
    printf("%s < %s\n", pa, pb);

  return 0;
}