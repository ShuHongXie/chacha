#include <stdio.h>
#include <string.h>
void fun(char *fname, char *st)

{
  FILE *myf;
  int i;
  myf = fopen(fname, "w");
  for (i = 0; i < strlen(st); i++)
    fputc(st[i], myf);
  fclose(myf);
}
main()
{
  fun("test.t", "new world");
  fun("test.t", "hello,");
}