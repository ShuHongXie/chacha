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
  scanf("%d,%d", &a, &b);
  max = getMinBei(a, b);
  printf("%d��%d����С������Ϊ:%d\n", a, b, max);
  min = getMaxYue(a, b);
  printf("%d��%d�����Լ��Ϊ:%d\n", a, b, min);
}

// ��ȡ��С������
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

// ��ȡ���Լ��
int getMaxYue(int a, int b)
{
  int maxYue = 0;
  for (int i = 1;; i++)
  {
    for (int j = 1;; j++)
    {
      if (b / j == a / i)
      {
        maxYue = b / j;
        break;
      }
      if (j > b)
      {
        break;
      }
    }
    if (maxYue != 0 || i > a)
    {
      break;
    }
  }
  return maxYue;
}