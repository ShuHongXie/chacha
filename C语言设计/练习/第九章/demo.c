#include <stdio.h>
#include <malloc.h>
#define LEN sizeof(struct student)

struct student
{
  int num;
  float score;
  struct student *next;
};

void main()
{
  // struct student
  // {
  //   int num;
  //   char name[20];
  //   char sex;
  // } st1, st2 = {100, "谢小谢", 'M'};
  // printf("%s", st1.name);

  // 定义结构体，输入数据
  // struct student
  // {
  //   int num;
  //   char name[20];
  //   char sex;
  // } std1, std2;
  // scanf("%d,%s,%c", &std1.num, &std1.name, &std1.sex);
  // scanf("%d,%s,%c", &std2.num, &std2.name, &std2.sex);
  // printf("%d,%s,%c\n", std1.num, std1.name, std1.sex);
  // printf("%d,%s,%c\n", std2.num, std2.name, std2.sex);

  // 结构体指针
  // struct student
  // {
  //   long num;
  //   char name[20];
  // } std1 = {100, "谢小谢"};
  // struct student *p = &std1;
  // printf("%d,%s", p->num, p->name);

  /*
    动态链表
    如何建立一个有两名学生学号和成绩数据的单向动态链表？
   */
  struct student *head, *p;
  head = p = (struct student *)malloc(LEN); // 开辟动态类型
  scanf("%d,%f", &p->num, &p->score);
  p = (struct student *)malloc(LEN);
  scanf("%d,%f", &p->num, &p->score);
  head->next = p;
  p->next = NULL;
  p = head;
  printf("\n结点1:%d,%6.2f\n", p->num, p->score);
  p = p->next;
  printf("结点 2:%d,%6.2f\n", p->num, p->score);
}