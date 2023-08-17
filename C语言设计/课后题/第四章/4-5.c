#include <stdio.h>

/*
由键盘输出3个整数a,b,c要求输出其中最大的数
*/
void main()
{
  int getMax(int a, int b, int c);
  int a, b, c;
  printf("请输入三个整数");
  scanf("%d,%d,%d", &a, &b, &c);
  int max = getMax(a, b, c);
  printf("最大值为%d", max);
}

int getMax(int a, int b, int c)
{
  if (a >= b && a >= c)
  {
    return a;
  }
  else if (b >= a && b >= c)
  {
    return b;
  }
  else if (c >= a && c >= b)
  {
    return c;
  }
}