// ˳���洢ͼƬ����
#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 10000
#define OVERFLOW -1
#define OK 1

typedef int Status;

typedef struct
{
  char no[20];   // ͼ��ISBN
  char name[50]; // ͼ������
  float price;   // ͼ��۸�
} Book;

typedef struct
{
  Book *elem; // �洢�ռ�Ļ���ַ
  int length; // ͼ����е�ǰͼ�����
} SqList;     // ͼ��˳���Ĵ洢�ṹ����ΪSqList

Status InitList(SqList *L)
{
  L->elem = (Book *)malloc(MAXSIZE * sizeof(Book));
  if (!L->elem)
  {
    exit(OVERFLOW);
  }
  L->length = 0;
  return OK;
}

void main()
{
}