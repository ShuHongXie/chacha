#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ���ַ������뵽�ļ���
void main()
{
  FILE *in, *out;
  char str[100];
  if ((out = fopen("t4.txt", "w")) == NULL)
  {
    printf("���ļ��򲻿�");
    exit(0);
  }
  if ((in = fopen("t5.txt", "r")) == NULL)
  {
    printf("���ļ��򲻿�");
    exit(0);
  }
  fgets(str, 100, in);
  // gets(str);
  fputs(str, out);
  fclose(in);
  fclose(out);
}