#include <stdio.h>

// void main()
// {
//   int f(int a);
//   int a = 2, i;
//   for (i = 0; i < 3; i++)
//   {
//     printf("%4d", f(a));
//   }
//   return 0;
// }

// int f(int a)
// {
//   int b = 0;
//   static int c = 2;
//   b++;
//   c++;
//   return (a + b + c);
// }

// void main()
// {
//   int func(int a, int b);
//   int k = 4, m = 1, p;
//   p = func(k, m);
//   printf("%d", p);
//   p = func(k, m);
//   printf("%d", p);
// }

// int func(int a, int b)
// {
//   static int m = 0, i = 2;
//   i += m + 1;
//   m = i + a + b;
//   return m;
// }

// void main()
// {
//   int m = 37, n = 13;
//   while (m != n)
//   {
//     while (m > n)
//     {
//       m = m - n;
//     }
//     printf("m=%d\n", m);
//     while (n > m)
//     {
//       n -= m;
//     }
//   }
//   printf("m=%d\n", m);
// }

void main()
{
  // float f = 123.3141595248;
  // float x = 123.3141111111;
  // double a = 6.0;
  // printf("f=%f\n", f);
  // printf("x=%f\n", x);
  // printf("a=%lf\n", a);
  int k = 3,
      s[2];
  // s[0] = k;
  // k = s[1] * 10;
  // char a[5] = {'g', 'o', 'o', 'd', '\0'};
  // int *p = a + 1;

  // printf("%s", p);
  // int num[10] = {1, 2, 3, 4, 6, 7, 8};
  // int *p = num;
  // printf("%d", *p);
  // p++;
  // printf("%d", *p);
  int a = 5, b = 6, c = 7, d = 8, m = 2, n = 2;
  (m = a > b) && (n = c < d);
  printf("%d\n", m);
  printf("%d", n);
}