#include <stdio.h>
void main()
{
  int max(int x, int y); // max函数在main函数之后定义，必须在调用前进行声明来通知编译系统，让系统知道max已定义
  int a, b, c;
  scanf("%d,%d", &a, &b);
  c = max(a, b);
  printf("max=%d\n", c);
  int e = 4, f = 3, g = 5;
  printf("%d\n", e < f < g);
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