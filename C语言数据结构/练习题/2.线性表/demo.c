#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2
#pragma warning(disable : 4996)

typedef int Status; // Status�Ǻ��������ͣ���ֵ�Ǻ������״̬����
typedef int ElemType;
//----���Ա�ĵ�����洢�ṹ----
typedef struct LNode
{
  ElemType data;
  struct LNode *next;
} LNode, *LinkList;

Status InitList_L(LinkList &L);
// �������������һ���ձ�
int ListEmpty(LinkList L);
// ��ʼ�������������
// ����������ж�����Ϊ�գ���Ϊ�շ���1���ǿ��򷵻�0
Status DestroyList_L(LinkList &L);
// ��ʼ�������������
// �����������������
Status ClearList_L(LinkList &L);
// ��ʼ�������������
// ����������������
void CreateList_L_head(LinkList &L, int n);
// �����������λ������n��Ԫ�ص�ֵ��������ͷ���ĵ������Ա�L
void CreateList_L_tail(LinkList &L, int n);
// ���������˳λ������n��Ԫ�ص�ֵ��������ͷ���ĵ������Ա�L
int Length_L(LinkList L);
// ��ʼ�������������
// �����������������ĳ���
Status GetElem_L(LinkList L, int i, ElemType &e);
// ��ʼ������LΪ��ͷ���ĵ������ͷָ��
// �������������i��Ԫ�ش���ʱ����ֵ����e������OK�����򷵻�ERROR
Status ListInsert_L(LinkList &L, int i, ElemType e);
// ��ʼ������LΪ��ͷ���ĵ������ͷָ��
// ����������ڴ�ͷ���ĵ������Ա�L�е�i��λ��֮ǰ����Ԫ��e
Status ListDelete_L(LinkList &L, int i, ElemType &e);
// ��ʼ������LΪ��ͷ���ĵ������ͷָ��
// ����������ڴ�ͷ���ĵ������Ա�L�У�ɾ����i��Ԫ�أ�����e������ֵ
void ListPrint_L(LinkList L);
// ��ʼ�������������
// ��������������ӡ����

Status InitList_L(LinkList &L)
{
  L = (LinkList)malloc(sizeof(LNode));
  L->next = NULL;
  return OK;
} // InitList_L
int ListEmpty(LinkList L)
{
  if (L->next) // �ǿ�
    return 0;
  else
    return 1;
} // ListEmpty
Status DestroyList_L(LinkList &L)
{
  LNode *p;
  while (L)
  {
    p = L;
    L = L->next;
    free(p);
  }
  return OK;
} //
Status ClearList_L(LinkList &L)
{
  LNode *p, *q;
  p = L->next;
  while (p)
  {
    q = p->next;
    free(p);
    p = q;
  }
  L->next = NULL;
  return OK;
} // ClearList
void CreateList_L_head(LinkList &L, int n) // ͷ�巨����������
{
  L = (LNode *)malloc(sizeof(LNode));
  L->next = NULL;
  for (int i = n; i > 0; i--)
  {
    LNode *p = (LNode *)malloc(sizeof(LNode));
    scanf("%d", &p->data); // ����Ԫ��ֵ
    p->next = L->next;     // ����Ԫ��ֵ
    L->next = p;           // ���뵽��ͷ
  }
} // CreateList_L
void CreateList_L_tail(LinkList &L, int n) // β�巨����������
{
  L = (LNode *)malloc(sizeof(LNode));
  L->next = NULL;
  LinkList s = L;
  for (int i = n; i > 0; i--)
  {
    LNode *p = (LNode *)malloc(sizeof(LNode));
    scanf("%d", &p->data); // ����Ԫ��ֵ
    p->next = NULL;
    s->next = p;
    s = p;
  }
} // CreateList_L_tail
int Length_L(LinkList L)
{
  int num = 0;
  while (L->next)
  {
    L = L->next;
    num++;
  }
  return num;
} // Length_L
Status GetElem_L(LinkList L, int i, ElemType &e)
{
  LinkList p = L->next; // ��ʼ����pָ���һ���ڵ�
  int j = 1;            // jΪ������
  while (p && j < i)
  {
    p = p->next;
    ++j;
  }
  if (!p || j > i)
    return ERROR; // ��i��Ԫ�ز�����
  e = p->data;    // ȡ��i��Ԫ��
  return OK;
} // GetElem_L

Status ListInsert_L(LinkList &L, int i, ElemType e)
{
  LinkList p = L;
  int j = 0;
  while (p && j < i - 1)
  {
    p = p->next; //	Ѱ�ҵ�i-1�����
    ++j;
  }
  if (!p || j > i - 1)
    return ERROR;
  LinkList s = (LinkList)malloc(sizeof(LNode));
  s->data = e;
  s->next = p->next;
  p->next = s;
  return OK;
} // ListInsert_L
Status ListDelete_L(LinkList &L, int i, ElemType &e)
{
  LinkList p = L;
  int j = 0;
  while (p->next && j < i - 1)
  {
    p = p->next;
    ++j;
  }
  if (!(p->next) || j > i - 1)
    return ERROR;
  LinkList q = p->next;
  p->next = q->next;
  e = q->data;
  free(q);
  return OK;
} // ListDelete_L
void ListPrint_L(LinkList L)
{
  printf("����λ�����Ϊ��");
  while (L->next)
  {
    L = L->next;
    printf("%d ", L->data);
  }
  printf("\n");
} // ListPrint_L

int main()
{
  LinkList L1;
  printf("ͷ�巨����������");
  CreateList_L_head(L1, 3);
  printf("������Ϊ%d\n", Length_L(L1));
  ListPrint_L(L1);
  int del;
  ListDelete_L(L1, 2, del);

  LinkList L2;
  printf("β�巨����������");
  CreateList_L_tail(L2, 3);
  printf("������Ϊ%d\n", Length_L(L2));
  ListPrint_L(L2);
  return 0;
}
