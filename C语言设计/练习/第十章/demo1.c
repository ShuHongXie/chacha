#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 2

struct student_type
{
  char name[10];
  int age;
} stud[SIZE] = {"谢小谢", 20, "菜小菜", 15};

void main()
{
  void fc(char fname[], char ch[]);
  // fgets,fputs使用方法示例
  /*
  FILE *rfp;
  FILE *wfp;
  char content[100];
  if ((rfp = fopen("t3.txt", "r+")) == NULL)
  {
    printf("open file error\n");
    exit(0);
  }
  if ((wfp = fopen("t4.txt", "w+")) == NULL)
  {
    printf("write file error\n");
    exit(0);
  }
  fgets(content, 100, rfp); // 从rfp指向的文件中读取字符串
  // strcat(content, "好的");
  fputs(content, wfp);
  printf("%s\n", content);
  */

  // fprint,fscanf使用方法示例
  /*
  FILE *fp;
  char content[100];
  if ((fp = fopen("t5.txt", "r+")) == NULL)
  {
    printf("open file error\n");
    exit(0);
  }
  int i = 10;
  float f = 4.3556;
  // fprintf(fp, "%d,%6.2f", i, f); // 将20,4.50按格式输入到fp文件中
  fscanf(fp, "%d,%6.2f", &i, &f); // 将t5.txt里面的字符串读取出来
  printf("%d,%f", i, f);
  */

  // fread,fwrite使用方法示例
  // FILE *fp;
  // int i;
  // if ((fp = fopen("t5.txt", "r+")) == NULL)
  // {
  //   printf("open file error\n");
  //   exit(0);
  // }
  // for (i = 0; i < SIZE; i++)
  // {
  //   if (fwrite(&stud[i], sizeof(struct student_type), 1, fp) != 1)
  //   {
  //     printf("file write error\n");
  //   }
  // }
  // fclose(fp);

  // rewind重置文件位置标记
  // FILE *rfp;
  // FILE *wfp;
  // if ((rfp = fopen("t6.txt", "r")) == NULL)
  // {
  //   printf("open file error\n");
  //   exit(0);
  // }
  // if ((wfp = fopen("t7.txt", "w")) == NULL)
  // {
  //   printf("write file error\n");
  //   exit(0);
  // }
  // while (!feof(rfp))
  // {
  //   putchar(getc(rfp));
  // }
  // putchar(10);
  // rewind(rfp);
  // while (!feof(rfp))
  // {
  //   putc(getc(rfp), wfp);
  // }
  // fclose(rfp);
  // fclose(wfp);

  // fseek函数

  // 文件追加
  // fc("t8.txt", "very");
  // fc("t8.txt", "good");

  // 文件格式化输入输出
  FILE *fp;
  int i, m, n;
  fp = fopen("t9.txt", "w+");
  for (i = 1; i < 6; i++)
  {
    fprintf(fp, "%d", i);
    if (i % 3 == 0)
      fprintf(fp, "\n");
  }

  rewind(fp);
  fscanf(fp, "%d%d", &m, &n);
  printf("%d%d\n", m, n);
  fclose(fp);
}

void fc(char fname[], char ch[])
{
  FILE *fp;
  int i;
  fp = fopen(fname, "a+");
  for (i = 0; i < strlen(ch); i++)
  {
    fputc(ch[i], fp);
  }

  fclose(fp);
}