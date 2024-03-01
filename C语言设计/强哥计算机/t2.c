#include <stdio.h>

// Á´½ÓÁ½¸ö×Ö·û´®
void concat(char *p1, char *p2)
{
  while (*p1 != '\0')
  {
    p1++;
  }
  printf("%c\n", *p1);
  while (*p2 != '\0')
  {
    printf("%c,%c\n", *p1, *p2);
    *p1++ = *p2++;
  }
  *p1 = '\0';
}

int main()
{
  char s1[20] = "abcde";
  char s2[20] = "qwer";
  concat(s1, s2);
  puts(s1);
  return 0;
}
