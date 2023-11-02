#include <stdio.h>
// #include <stdlib.h>

// getMax(int a, int b)
// {
//   return a + b;
// }

// void testFunc(int *b, char *c)
// {
//   *b = 3;
//   *(c + 1) = 'j';
// }

void main()
{
  // int t, a, b, i;
  // for (i = 1; i <= 3; i++)
  // {
  //   scanf("%d%d", &a, &b);
  //   if (a > b)
  //   {
  //     t = a - b;
  //   }
  //   else if (a = b)
  //   {
  //     t = 1;
  //   }
  //   else
  //   {
  //     t = b - a;
  //   }
  //   printf("%d", t);
  // }

  // ��֤����Ĭ��ֵ�Ƿ�Ϊint
  // int a = 3, b = 4, c;
  // c = getMax(a, b);
  // printf("%d", c);

  // ���Լ��
  // int r;
  // int m = 12, n = 9;
  // while ((r = m % n) != 0)
  // {
  //   m = n;
  //   n = r;
  //   printf("%d,%d\n", m, n);
  // }
  // printf("%d", n);

  // ����ָ��ʹ�����ʹ���ʱ�����
  // int a = 100;
  // char c[] = "asd";
  // testFunc(&a, c);
  // printf("%d,%s", a, c);

  // char str1[] = "ismyline";
  // char str2[8] = "ismylin";
  // int z = 4;
  // printf("%d\n", sizeof(str1));
  // printf("%d\n", sizeof(str2));
  // printf("%d\n", sizeof(z));
  // printf("%s\n", str2);

  int arr[] = {1, 2, 3};
  // int *p = arr;
  // printf("%d\n", *(p + 1));
  // printf("%d\n", p[2]);
  // printf("----");
  // int *p;
  // p = &arr;

  int x, y;
  x = 2;
  y = x++ - 1;
  printf("%d,%d", x, y);
}