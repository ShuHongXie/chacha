#include <stdio.h>

int main()
{
  int a1, a2;
  char c1, c2;
  scanf("%d%c%d%c", &a1, &c1, &a2, &c2);
  printf("%d,%c,%d,%c", a1, c1, a2, c2);
  // scanf("%d%d", &a1, &a2);
  // printf("%d,%d", a1, a2);
  putchar('\n');
  return 0;
}