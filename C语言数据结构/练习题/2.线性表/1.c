// ˳���˳��洢ͼƬ����(��ʽʵ��)
#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 10000
#define OVERFLOW -1
#define OK 1
#define ERROR -2

typedef int Status;

typedef struct
{
  int no;        // ͼ��ISBN
  char name[50]; // ͼ������
  float price;   // ͼ��۸�
} Book;

typedef struct Node
{
  Book *elem;        // �洢�ռ�Ļ���ַ
  struct Node *next; // ͼ�������һ��ͼ�� ����Node������ʽ����struct�����֣������������LNode
} LNode, *LinkList;  // ����typedef��struct�ı����������پ��г�ʼ�����ܣ�����������ؼ���

// ��ʼ��
Status InitList(LNode *L)
{
  L->elem = (Book *)malloc(sizeof(Book));
  L->next = NULL;
  return OK;
}

// ȡֵ
Status GetElem(LNode *L, int i)
{
  LNode *p = L->next;
  int j = 1;
  while (p && j < i)
  {
    p = p->next;
    ++j;
  }

  if (!p || j > i)
  {
    printf("�Ҳ�������\n");
    return ERROR;
  }
  printf("��%d��������Ϊ%s\n", i, p->elem->name);
  return OK;
}

// ����
Status InsertElem(LNode *L, int i, Book *b)
{
  LNode *p = L;
  int j = 0;
  while (p && (j < i - 1))
  {
    p = p->next;
    ++j;
  }
  if (!p || j > i - 1)
  {
    return ERROR;
  }
  LNode *node = (LNode *)malloc(sizeof(LNode));
  node->elem = b;
  node->next = p->next;
  p->next = node;
}

// ɾ��
void DeleteElem(LNode *l, int i)
{
  LNode *p = l;
  LNode *retainNode; // ��ɾ������
  int j = 0;
  while (p->next && j < i - 1)
  {
    p = p->next;
    ++j;
  }
  retainNode = p->next;
  p->next = retainNode->next;
  free(retainNode);
  retainNode = NULL;
  return;
}

void main()
{
  // ��������������ʽ������
  LNode list; // ��ʼ��ʱ���ܳ�ʼ��Ϊָ�뺯�����������޷����ٿռ�
  // LinkList list;
  InitList(&list);
  Book b1 = {1, "��¥��", 99};
  Book b2 = {1, "���μ�", 100};
  Book b3 = {1, "��������", 101};
  Book b4 = {1, "����ɽ����", 103};
  InsertElem(&list, 1, &b1);
  InsertElem(&list, 2, &b2);
  InsertElem(&list, 3, &b3);
  InsertElem(&list, 2, &b4);

  DeleteElem(&list, 2);
  GetElem(&list, 2);
  // printf("%d", list->elem->no);
}