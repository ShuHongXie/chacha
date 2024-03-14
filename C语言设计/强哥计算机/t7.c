#include <stdio.h>

void strcpys(char *p1, char *p2)
{
  while (*p2)
  {
    *p1++ = *p2++;
  }
  *p1 = '\0';
}
int main()
{

  char s1[20] = "abcde";
  char s2[20] = "qwer";
  char *p1 = s1;
  char *p2 = s2;
  strcpys(s1, s2);
  // printf("%s\n", s1);
  printf("%d\n", 0 == '\0');
  return 0;
}