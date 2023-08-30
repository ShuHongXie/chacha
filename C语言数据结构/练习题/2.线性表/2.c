#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#define ERROR 0
#define MAXSIZE 100 // ��󳤶�

// ���Ա�ĵ�����ʵ�� (��ͷ���)
typedef struct Node
{
  int data;
  struct Node *next;
} BookNode;

// ��ӡ
void show(BookNode *l)
{
  printf("��ʼ��ӡ����----\n");
  BookNode *p = l;
  while (p->next)
  {
    printf("%d\n", p->data);
    p = p->next;
  }
  return;
}

// ��ʼ��, ǰ�巨(Ĭ�Ͽս��,���Ӷ������)
BookNode *initList_H(BookNode *l, int n)
{
  l = (BookNode *)malloc(sizeof(BookNode));
  l->next = NULL;
  BookNode *node;
  for (int i = 0; i < n; ++i)
  {
    node = (BookNode *)malloc(sizeof(BookNode));
    node->data = i + 1;
    node->next = l->next;
    l->next = node;
  }
  return l;
}

// ��ʼ��, ��巨(Ĭ�Ͽս��,���Ӷ������)
BookNode *initList_R(BookNode *l, int n)
{
  l = (BookNode *)malloc(sizeof(BookNode));
  l->next = NULL;
  BookNode *node;
  BookNode *firstNode = l;
  for (int i = 0; i < n; ++i)
  {
    node = (BookNode *)malloc(sizeof(BookNode));
    node->data = i + 1;
    // node->next = NULL;
    l->next = node;
    l = node;
  }
  l->next = NULL;
  // ָ��ָ��ȥ
  l = firstNode;
  return l;
}

int main()
{
  BookNode *bookList;
  // bookList = initList_H(bookList, 4);
  bookList = initList_R(bookList, 4);
  printf("%d\n", bookList->data);
  show(bookList);
  return 0;
}