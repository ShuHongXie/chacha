#include <stdio.h>
#include <stdlib.h>

void main()
{
  // �򵥴��ļ�����
  // FILE *fp;
  // if ((fp = fopen("test.text", "r")) == NULL)
  // {
  //   printf("cannot open this file\n");
  //   exit(0);
  // }

  // �Ӽ��������ַ���Ȼ���͵�������ȥ
  // FILE *fp;
  // char ch, filename[10];
  // printf("���������õ��ļ�����");
  // scanf("%s", filename);
  // if ((fp = fopen("t5.txt", "r")) == NULL)
  // {
  //   printf("�޷��򿪴��ļ�\n");
  //   exit(0);
  // }
  // ch = getchar();
  // printf("������һ��׼���洢�����̵��ַ���(��#������");
  // ch = getchar();
  // while (ch != '#')
  // {
  //   fputc(ch, fp);
  //   putchar(ch);
  //   ch = getchar();
  // }
  // fclose(fp);
  // putchar(10);

  // ��һ�������ļ���Ϣ���Ƶ���һ�������ļ��У���
  FILE *in, *out;
  char ch, infile[10], outfile[10];
  printf("����������ļ�����t�֣�");
  scanf("%s", infile);
  printf("����������ļ������֣�");
  scanf("%s", outfile);
  if ((in = fopen(infile, "r")) == NULL)
  {
    printf("�޷��򿪴��ļ�\n");
    exit(0);
  }
  if ((out = fopen(outfile, "w")) == NULL)
  {
    printf("�޷��򿪴��ļ�\n");
    exit(0);
  }
  ch = fgetc(in);
  while (!feof(in)) // ����Ҳ����д��ch != -1 �� ch != EOF
  {
    fputc(ch, out);
    printf("%c\n", ch);
    ch = fgetc(in);
  }
  printf("\n");
  fclose(in);
  fclose(out);
}