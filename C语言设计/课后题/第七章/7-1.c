#include <stdio.h>

/*
    7.1д��������,�ֱ����������������Լ������С�������o
    ����������������������,�������������������ɼ������롣
*/
void main()
{
  int getMinBei(int a, int b);
  int getMaxYue(int a, int b);
  int a, b, max, min;
  // scanf("%d,%d", a, b);
  max = getMinBei(12, 18);
  printf("��ǰ��������ֵ����С������Ϊ:%d\n", max);
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