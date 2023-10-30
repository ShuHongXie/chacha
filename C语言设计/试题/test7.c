#include <stdio.h>

void inv(int *x, int n)
{
  int *p, t, *i, *j, m = (n - 1) / 2;
  i = x;
  j = x + n - 1;
  p = x + m;
  printf("%d,%d,%d,%d", i, j, p, m);
  for (; i < p; i++, j--)
  {
    t = *i;
    *i = *j;
    *j = t;
  }
  return;
}
void main()
{
  // static int i, a[10] = {3, 7, 9, 11, 0, 6, 7, 5, 4, 2};
  // inv(a, 10);
  // for (i = 0; i < 10; i++)
  // {
  //   printf("%d,", a[i]);
  // }
  // int a[3][4] = {{1, 3, 5, 7}, {9, 11, 13, 15}, {17, 19, 21, 23}};
  // int(*p)[4] = a + 1;
  // printf("%d", *p[0]);

  // int *a(int x)
  // {
  //   int *pt;
  //   pt = &x;
  //   return pt;
  // }
  // int *p;
  // p = a(4);
  // printf("%d", *p);

  // int a = 100;
  // int *p1 = &a;
  // int **p2 = &p1;
  // int ***p3 = &p2;
  // printf("%d, %d, %d, %d\n", a, *p1, **p2, ***p3); // 打印 100,100，100,100

  int a = 1;
  int *pa = &a;
  int b = 2;
  int *pb = &b;
  int c = 3;
  int *pc = &c;
  int d = 4;
  int *pd = &d;
  int e = 5;
  int *pe = &e;

  int *arr1[5] = {&a, &b, &c, &d, &e};
  int *arr2[5] = {pa, pb, pc, pd, pe};
  printf("%d", *arr2[2]);
}
