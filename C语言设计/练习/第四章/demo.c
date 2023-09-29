#include <stdio.h>

void main()
{
  // int a;
  // if (true)
  // {
  //     a = 100;
  // }

  // else
  // {
  //     if (false)
  //     {
  //         a = 300;
  //     }
  //     a = 200;
  // }
  // printf("a=%d", a);

  int a = 1;
  switch (a)
  {
  case 1:
    printf("是第一\n");
  case 2:
    printf("是第二\n");
  default:
    printf("是默认\n");
  }

  // double x, fractpart, intpart;

  // x = 1234;
  // fractpart = modf(x, &intpart);

  // printf("整数部分 = %lf\n", intpart);
  // printf("小数部分 = %lf \n", fractpart);
}