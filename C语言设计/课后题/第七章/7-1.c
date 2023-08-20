#include <stdio.h>

/*
    7.1写两个函数,分别求两个整数的最大公约数和最小公倍数﹐
    用主函数调用这两个函数,并输出结果。两个整数由键盘输入。
*/
void main()
{
  int getMinBei(int a, int b);
  int getMaxYue(int a, int b);
  int a, b, max, min;
  // scanf("%d,%d", a, b);
  max = getMinBei(12, 18);
  printf("当前输入两个值的最小公倍数为:%d\n", max);
}

int getMinBei(int a, int b)
{
  int minBei = 0;
  for (int i = 1;; i++)
  {
    for (int j = 1;; j++)
    {
      if (b * j >= a * i)
      {
        if (b * j == a * i)
        {
          minBei = b * j;
        }
        break;
      }
    }
    if (minBei != 0)
    {
      break;
    }
  }
  return minBei;
}

int getMaxYue(int a, int b)
{
  int maxYue = 0;
  for (int i = a;; i--)
  {

    for (int j = b;; j--)
    {
      if (b % i >= a % i)
      {
      }
    }
    if (maxYue != 0)
    {
      break;
    }
  }
  return maxYue;
}