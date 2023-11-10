#include <stdio.h>

fun(char *s, int p1, int p2)
{
  char c;
  while (p1 < p2)
  {
    c = s[p1];
    s[p1] = s[p2];
    s[p2] = c;
    p1++;
    p2--;
  }
}
// main()
// {
//   char a[] = "ABCDEFG", k, *p;
//   fun(a, 0, 2); // 第一次 CBADEFG
//   fun(a, 4, 6); // 第二次 CBADGFE
//   printf("%s\n", a);
// }

// long func(int x)
// {
//   long p;
//   if (x == 0 || x == 1)
//   {
//     return 2;
//   }
//   p = x * func(x - 1);
//   return (p);
// }
// main()
// {
//   printf("%d\n", func(4));
// }

// struct tree
// {
//   int x;
//   char *s;
// } t;
// void func(struct tree t)
// {
//   t.x = 10;
//   t.s = "computer";
// }
// void main()
// {
//   t.x = 1;
//   t.s = "minicomputer";
//   func(t);
//   printf("%d,%s", t.x, t.s);
// }

void dele(char *s)
{
  int n = 0, i;
  for (i = 0; s[i]; i++)
  {
    if (!(s[i] >= '0' && s[i] <= '9'))
    {
      printf("%d", n);
      s[n++] = s[i];
    }
  }
  printf("%d", n);
  s[n] = '\0';
}

void main()
{
  int a = 2;
  int b = 3;
  printf("%d", a && b);
}