#include <stdlib.h>
#include <stdio.h>

void main()
{
  FILE *in, *out;
  char ch, filename1[100], filename2[100];
  scanf("%s", filename1);
  scanf("%s", filename2);
  if ((in = fopen(filename1, "r")) == NULL)
  {
    printf("无法打开此文件\n");
    exit(0);
  }

  if ((out = fopen(filename2, "w")) == NULL)
  {
    printf("无法打开此文件\n");
    exit(0);
  }
  ch = fgetc(in);
  while (!feof(in))
  {
    fputc(ch, out);
    ch = fgetc(in);
  }
  fclose(in);
  fclose(out);
}
