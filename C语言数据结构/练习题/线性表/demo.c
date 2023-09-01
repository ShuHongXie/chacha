#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2
#pragma warning(disable : 4996)

typedef int Status; // Status是函数的类型，其值是函数结果状态代码
typedef int ElemType;
//----线性表的单链表存储结构----
typedef struct LNode
{
  ElemType data;
  struct LNode *next;
} LNode, *LinkList;

Status InitList_L(LinkList &L);
// 操作结果：构造一个空表
int ListEmpty(LinkList L);
// 初始条件：链表存在
// 操作结果：判断链表为空，若为空返回1，非空则返回0
Status DestroyList_L(LinkList &L);
// 初始条件：链表存在
// 操作结果：销毁链表
Status ClearList_L(LinkList &L);
// 初始条件：链表存在
// 操作结果：清空链表
void CreateList_L_head(LinkList &L, int n);
// 操作结果：逆位序输入n个元素的值，建立带头结点的单链线性表L
void CreateList_L_tail(LinkList &L, int n);
// 操作结果：顺位序输入n个元素的值，建立带头结点的单链线性表L
int Length_L(LinkList L);
// 初始条件：链表存在
// 操作结果：返回链表的长度
Status GetElem_L(LinkList L, int i, ElemType &e);
// 初始条件：L为带头结点的单链表的头指针
// 操作结果：当第i个元素存在时，其值赋给e并返回OK，否则返回ERROR
Status ListInsert_L(LinkList &L, int i, ElemType e);
// 初始条件：L为带头结点的单链表的头指针
// 操作结果：在带头结点的单链线性表L中第i个位置之前插入元素e
Status ListDelete_L(LinkList &L, int i, ElemType &e);
// 初始条件：L为带头结点的单链表的头指针
// 操作结果：在带头结点的单链线性表L中，删除第i个元素，并由e返回其值
void ListPrint_L(LinkList L);
// 初始条件：链表存在
// 操作结果：按序打印链表

Status InitList_L(LinkList &L)
{
  L = (LinkList)malloc(sizeof(LNode));
  L->next = NULL;
  return OK;
} // InitList_L
int ListEmpty(LinkList L)
{
  if (L->next) // 非空
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
void CreateList_L_head(LinkList &L, int n) // 头插法创建单链表
{
  L = (LNode *)malloc(sizeof(LNode));
  L->next = NULL;
  for (int i = n; i > 0; i--)
  {
    LNode *p = (LNode *)malloc(sizeof(LNode));
    scanf("%d", &p->data); // 输入元素值
    p->next = L->next;     // 输入元素值
    L->next = p;           // 插入到表头
  }
} // CreateList_L
void CreateList_L_tail(LinkList &L, int n) // 尾插法创建单链表
{
  L = (LNode *)malloc(sizeof(LNode));
  L->next = NULL;
  LinkList s = L;
  for (int i = n; i > 0; i--)
  {
    LNode *p = (LNode *)malloc(sizeof(LNode));
    scanf("%d", &p->data); // 输入元素值
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
  LinkList p = L->next; // 初始化，p指向第一个节点
  int j = 1;            // j为计数器
  while (p && j < i)
  {
    p = p->next;
    ++j;
  }
  if (!p || j > i)
    return ERROR; // 第i个元素不存在
  e = p->data;    // 取第i个元素
  return OK;
} // GetElem_L

Status ListInsert_L(LinkList &L, int i, ElemType e)
{
  LinkList p = L;
  int j = 0;
  while (p && j < i - 1)
  {
    p = p->next; //	寻找第i-1个结点
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
  printf("链表按位序输出为：");
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
  printf("头插法建立单链表：");
  CreateList_L_head(L1, 3);
  printf("链表长度为%d\n", Length_L(L1));
  ListPrint_L(L1);
  int del;
  ListDelete_L(L1, 2, del);

  LinkList L2;
  printf("尾插法建立单链表：");
  CreateList_L_tail(L2, 3);
  printf("链表长度为%d\n", Length_L(L2));
  ListPrint_L(L2);
  return 0;
}
