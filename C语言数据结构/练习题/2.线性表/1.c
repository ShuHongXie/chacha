// 顺序表存储图片案例
#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 10000
#define OVERFLOW -1
#define OK 1

typedef int Status;

typedef struct
{
  char no[20];   // 图书ISBN
  char name[50]; // 图书名字
  float price;   // 图书价格
} Book;

typedef struct
{
  Book *elem; // 存储空间的基地址
  int length; // 图书表中当前图书个数
} SqList;     // 图书顺序表的存储结构类型为SqList

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