#include <stdio.h>

void main()
{
  char *a = "this is ";
  char *b = "life";
  char str[20];
  int i = 0, j = 0;

  while (*(a + i) != '\0')
  {
    *(str + i) = *(a + i);
    i++;
  }
  while (*(b + j) != '\0')
  {
    *(str + i + j) = *(b + j);
    j++;
  }
  printf("%s", str);
}

// void main()
// {
//   int a, b;
//   printf("请输入a,b的值，用空格隔开\n");
//   scanf("%d,%d", &a, &b);
//   int *p1 = &a;
//   int *p2 = &b;
//   if (*p1 > *p2)
//   {
//     printf("%d,%d", *p2, *p1);
//   }
//   else
//   {
//     printf("%d,%d", *p1, *p2);
//   }
// }