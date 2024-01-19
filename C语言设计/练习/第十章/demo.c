#include <stdio.h>
#include <stdlib.h>

void main()
{
  // 简单打开文件操作
  // FILE *fp;
  // if ((fp = fopen("test.text", "r")) == NULL)
  // {
  //   printf("cannot open this file\n");
  //   exit(0);
  // }

  // 从键盘输入字符，然后送到磁盘上去
  // FILE *fp;
  // char ch, filename[10];
  // printf("请输入所用的文件名：");
  // scanf("%s", filename);
  // if ((fp = fopen("t5.txt", "r")) == NULL)
  // {
  //   printf("无法打开此文件\n");
  //   exit(0);
  // }
  // ch = getchar();
  // printf("请输入一个准备存储到磁盘的字符串(以#结束：");
  // ch = getchar();
  // while (ch != '#')
  // {
  //   fputc(ch, fp);
  //   putchar(ch);
  //   ch = getchar();
  // }
  // fclose(fp);
  // putchar(10);

  // 将一个磁盘文件信息复制到另一个磁盘文件中，将
  FILE *in, *out;
  char ch, infile[10], outfile[10];
  printf("请输入读入文件的名t字：");
  scanf("%s", infile);
  printf("请输入输出文件的名字：");
  scanf("%s", outfile);
  if ((in = fopen(infile, "r")) == NULL)
  {
    printf("无法打开此文件\n");
    exit(0);
  }
  if ((out = fopen(outfile, "w")) == NULL)
  {
    printf("无法打开此文件\n");
    exit(0);
  }
  ch = fgetc(in);
  while (!feof(in)) // 这里也可以写成ch != -1 或 ch != EOF
  {
    fputc(ch, out);
    printf("%c\n", ch);
    ch = fgetc(in);
  }
  printf("\n");
  fclose(in);
  fclose(out);
}