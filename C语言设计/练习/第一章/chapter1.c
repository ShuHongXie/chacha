#include <stdio.h>
void main()
{
  int max(int x, int y); // max������main����֮���壬�����ڵ���ǰ����������֪ͨ����ϵͳ����ϵͳ֪��max�Ѷ���
  // int a, b, c;
  // scanf("%d,%d", &a, &b);
  // c = max(a, b);
  // printf("max=%d\n", c);
  // int e = 4, f = 3, g = 5;
  // printf("%d\n", e < f < g);
  for (int i = 0; i < 3; i++)
  {
    if (!i)
    {
      continue;
    }
    printf("%d\n", i);
  }
}

int max(int x, int y)
{
  int z;
  if (x > z)
  {
    z = x;
  }
  else
  {
    z = y;
  }
  return z;
}