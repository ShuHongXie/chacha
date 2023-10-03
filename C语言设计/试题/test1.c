#include <stdio.h>

int fun(int x)
{
  if (x / 2 > 1)
  {
    fun(x / 2);
  }
  return (printf("%d\n", x));
};

int main()
{
  int fun(int x);
  fun(7);
  return 0;
}