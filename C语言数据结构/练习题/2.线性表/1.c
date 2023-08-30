// 顺序表顺序存储图片案例(链式实现)
#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 10000
#define OVERFLOW -1
#define OK 1
#define ERROR -2

typedef int Status;

typedef struct
{
  int no;        // 图书ISBN
  char name[50]; // 图书名字
  float price;   // 图书价格
} Book;

typedef struct Node
{
  Book *elem;        // 存储空间的基地址
  struct Node *next; // 图书表中下一个图书 其中Node必须显式地以struct的名字，不能以下面的LNode
} LNode, *LinkList;  // 加了typedef后，struct的变量名列则不再具有初始化功能，变成了命名关键字

// 初始化
Status InitList(LNode *L)
{
  L->elem = (Book *)malloc(sizeof(Book));
  L->next = NULL;
  return OK;
}

// 取值
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
    printf("找不到该书\n");
    return ERROR;
  }
  printf("第%d个的书名为%s\n", i, p->elem->name);
  return OK;
}

// 插入
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

// 删除
void DeleteElem(LNode *l, int i)
{
  LNode *p = l;
  LNode *retainNode; // 待删除的项
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
  // 下面两种命名方式都可以
  LNode list; // 初始化时不能初始化为指针函数，这样会无法开辟空间
  // LinkList list;
  InitList(&list);
  Book b1 = {1, "红楼梦", 99};
  Book b2 = {1, "西游记", 100};
  Book b3 = {1, "三国演义", 101};
  Book b4 = {1, "基督山伯爵", 103};
  InsertElem(&list, 1, &b1);
  InsertElem(&list, 2, &b2);
  InsertElem(&list, 3, &b3);
  InsertElem(&list, 2, &b4);

  DeleteElem(&list, 2);
  GetElem(&list, 2);
  // printf("%d", list->elem->no);
}