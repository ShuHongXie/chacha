
#include <stdio.h>
#include <string.h>

int main()
{
  // int a[4][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}};
  // int(*p)[5] = a;
  // printf("%d\n", *(*p + 2));
  // printf("%d\n", **p);
  int i, j;
  for (i = 1; i < 5; i++)
    for (j = 2; j <= i; j++)
      putchar('#');
  return 0;
}

void link_string(char *arr1, char *arr2)
{
  int i = 0;
  for (; *arr1 != '\0';)
  {
    arr1++;
  }
  for (; *arr2 != '\0'; arr1++, arr2++)
  {
    *arr1 = *arr2;
  }
  *arr1 = '\0';
}