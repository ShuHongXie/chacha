#include <stdio.h>
#include <string.h>
#define N 2
#define M N + 1
#define MUM (M + 1) * M / 2
void main()
{
  char str[] = "ab\0cd";
  printf("%d\n", strlen(str));
  printf("%d\n", sizeof(str));
}