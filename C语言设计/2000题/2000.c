
#include <stdio.h>
#include <string.h>

int main()
{
  // int a[4][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}};
  // int(*p)[5] = a;
  // printf("%d\n", *(*p + 2));
  // printf("%d\n", **p);
  // char str[12] = {'C', 'z'};

  int a[3][4] = {{1, 3, 5, 7}, {6, 11, 13, 15}, {17, 19, 21, 23}};
  int(*p)[4] = a + 1;
  printf("%d\n", (*p)[1]);
  printf("%d\n", *p[1]);
  printf("%d\n", *(*(p + 1) + 1));

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