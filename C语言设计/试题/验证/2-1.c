#include <stdio.h>

// ָ��Ӵ�С����
// void main()
// {
//   int a, b, *p1, *p2;
//   scanf("%d", &a);
//   scanf("%d", &b);
//   p1 = &a;
//   p2 = &b;
//   int max = *(p1), min = *(p2);
//   if (*(p1) < (*p2))
//   {
//     max = *(p2);
//     min = *(p1);
//   }
//   printf("%d,%d", max, min);
// }

void main()
{
  char str1[20] = "this is me";
  char str2[10] = ", and you?";
  for (int i = 10; i < 20; i++)
  {
    str1[i] = str2[i - 10];
  }
  printf("%s\n", str1);

  float f1 = 1.0;
  float f2 = 3.0;
  float z1 = f1 / f2;
  printf("%f\n", z1);

  int r1 = 10;
  int r2 = 11;
  printf("%d\n", r1 && r2);
}