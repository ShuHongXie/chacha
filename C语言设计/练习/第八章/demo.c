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

  // ???????????10????????????ò???????????????е???????
  /*
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
  */

  // 指针的变量交换误导区
  // void swap(int *p1, int *p2);
  // int a, b;
  // int *p1, *p2;
  // scanf("%d,%d", &a, &b);
  // p1 = &a;
  // p2 = &b;
  // if (a < b)
  // {
  //   swap(p1, p2);
  // }
  // printf("max=%d,min=%d\n", a, b);

  // 指针变量使用
  int a[10] = {19, 17, 20, 18, 16, 22, 24, 15, 23, 25};
  int i, *p = a;
  for (int i = 0; i < 10; i++)
  {
    printf("%d,", p[i]);
  }
}

void swap(int *p1, int *p2)
{
  // 正确情况
  // int temp;
  // temp = *p1;
  // *p1 = *p2;
  // *p2 = temp;

  // 错误情况1
  // int *temp;  // 这里未给temp赋值，所以temp指向的单元也是不可预见的，对*temp就是向一个位置的存储单元赋值，
  // *temp = *p1;
  // p1 = *p2;
  // p2 = *temp;

  // 错误情况2
  // int *temp;
  // temp = p1;
  // p1 = p2;
  // p2 = temp;
}