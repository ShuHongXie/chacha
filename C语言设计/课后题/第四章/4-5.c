#include <stdio.h>

/*
�ɼ������3������a,b,cҪ���������������
*/
void main()
{
  int getMax(int a, int b, int c);
  int a, b, c;
  printf("��������������");
  scanf("%d,%d,%d", &a, &b, &c);
  int max = getMax(a, b, c);
  printf("���ֵΪ%d", max);
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