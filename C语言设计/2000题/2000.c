
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
  int(*p)[4] = a;
  // printf("%d\n", *p[1]);
  // printf("%d\n", (*p)[1]);
  // printf("%d\n", *p[1]);
  char *str[] = {"abcd",
                 "efgh",
                 "ijkl"};
  int n1[] = {1, 3, 5, 7}, *s1 = n1;
  int n2[] = {6, 11, 13, 15}, *s2 = n2;
  int n3[] = {17, 19, 21, 23}, *s3 = n3;
  int *num[] = {s1, s2, s3};
  char *s = "hello";
  printf("%s\n", s);
  printf("%s\n", *(str + 1) + 1);
  // printf("%s", str[2] + 1);
  // int arr[20] = {1, 10, 3, 4, 5, 6}, *p1 = arr;
  // arr[1] = p1[2];
  // int *p2;
  // *p2 = *p1;
  // int ax[6];
  // ax = 10000;
  // printf("%d\n", *p[1]);
  // printf("%d\n", (*p)[1]);
  // printf("%d\n", *p[1]);
  // printf("%d\n", *(*(p + 1) + 1));
  // printf("%d\n", *(++p1));
  // char str = 'A';
  // switch (str)
  // {
  // case 'A':
  // case 'B':
  // {
  //   printf("����2\n");
  // }
  // case 'c':
  //   printf("����3\n");
  // }
  // return 0;
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