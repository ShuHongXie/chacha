#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 2

struct student_type
{
  char name[10];
  int age;
} stud[SIZE] = {"лСл", 20, "��С��", 15};

void main()
{
  void fc(char fname[], char ch[]);
  // fgets,fputsʹ�÷���ʾ��
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
  fgets(content, 100, rfp); // ��rfpָ����ļ��ж�ȡ�ַ���
  // strcat(content, "�õ�");
  fputs(content, wfp);
  printf("%s\n", content);
  */

  // fprint,fscanfʹ�÷���ʾ��
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
  // fprintf(fp, "%d,%6.2f", i, f); // ��20,4.50����ʽ���뵽fp�ļ���
  fscanf(fp, "%d,%6.2f", &i, &f); // ��t5.txt������ַ�����ȡ����
  printf("%d,%f", i, f);
  */

  // fread,fwriteʹ�÷���ʾ��
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

  // rewind�����ļ�λ�ñ��
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

  // fseek����

  // �ļ�׷��
  // fc("t8.txt", "very");
  // fc("t8.txt", "good");

  // �ļ���ʽ���������
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