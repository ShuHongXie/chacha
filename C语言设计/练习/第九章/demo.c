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
  struct student
  {
    int num;
    char name[20];
    char sex;
    int age;
  } st1, st2 = {100, "谢小谢", 'M', 30};

  union demo
  {
    short int i;
    char ch;
    float f;
  } a, b, c;
  a.i = 2;
  printf("%d\n", a.i);
  a.ch = 'Z';
  printf("%c\n", a.ch);
  printf("%d\n", a.i);

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
  // struct student *head, *p;
  // head = p = (struct student *)malloc(LEN); // 开辟动态类型
  // scanf("%d,%f", &p->num, &p->score);
  // p = (struct student *)malloc(LEN);
  // scanf("%d,%f", &p->num, &p->score);
  // head->next = p;
  // p->next = NULL;
  // p = head;
  // printf("\n结点1:%d,%6.2f\n", p->num, p->score);
  // p = p->next;
  // printf("结点 2:%d,%6.2f\n", p->num, p->score);

  struct student stu[3] =
      {
          {10101, "Li Lin", 'M', 18},
          {10102, "zhang Fun", 'M', 19},
          {10104, "wang Min", 'E', 20}};
  struct student *p = stu;
  for (; p < stu + 3; p++)
  {
    printf("%5d%-20s %2c %4d\n", p->num, p->name, p->sex, p->age);
  }
}