#include <stdio.h>

void main()
{
  // int a, b;
  // int *p1, *p2;
  // a = 100;
  // b = 10;
  // p1 = &a;
  // p2 = &b;
  // printf("a=%d,b=%d\n", a, b);
  // printf("*p1=%d,*p2=%d\n", *p1, *p2);

  // ��һ��������10��ѧ�������䣬�ò�ͬ�ķ�����������е�ȫ��Ԫ��
  int a[10] = {19, 17, 20, 18, 16, 22, 24, 15, 23, 25};
  int i, *p = a;
  for (int i = 0; i < 10; i++)
  {
    printf("%d,", a[i]);
  }
  printf("\n");
  for (int i = 0; i < 10; i++)
  {
    printf("%d,", *(a + i));
  }
  printf("\n");
  for (int i = 0; i < 10; i++)
  {
    printf("%d,", *(p + i));
  }
  printf("\n");
  for (p; p < (a + 10); p++)
  {
    printf("%d,", *p);
  }
  printf("\n");
}