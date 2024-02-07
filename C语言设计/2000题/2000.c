
#include <stdio.h>
#include <string.h>

int main()
{
  // int a[4][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}};
  // int(*p)[5] = a;
  // printf("%d\n", *(*p + 2));
  // printf("%d\n", **p);
  // char str[12] = {'C', 'z'};
  char str1[] = {'C', 'z'};  // 3
  char str2[] = {"Cz"};      // 2
  char str3[] = "Cz";        // 2
  char str4[3] = {'C', 'z'}; // 2
  char str5[3] = "Cz";       // 2
  // printf("%d\n", strlen(str));
  printf("%d\n", sizeof(str1));
  printf("%d\n", sizeof(str2));
  printf("%d\n", sizeof(str3));
  printf("%d\n", sizeof(str4));
  printf("%d\n", sizeof(str5));
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