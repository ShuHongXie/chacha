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
  // } st1, st2 = {100, "лСл", 'M'};
  // printf("%s", st1.name);

  // ����ṹ�壬��������
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

  // �ṹ��ָ��
  // struct student
  // {
  //   long num;
  //   char name[20];
  // } std1 = {100, "лСл"};
  // struct student *p = &std1;
  // printf("%d,%s", p->num, p->name);

  /*
    ��̬����
    ��ν���һ��������ѧ��ѧ�źͳɼ����ݵĵ���̬����
   */
  struct student *head, *p;
  head = p = (struct student *)malloc(LEN); // ���ٶ�̬����
  scanf("%d,%f", &p->num, &p->score);
  p = (struct student *)malloc(LEN);
  scanf("%d,%f", &p->num, &p->score);
  head->next = p;
  p->next = NULL;
  p = head;
  printf("\n���1:%d,%6.2f\n", p->num, p->score);
  p = p->next;
  printf("��� 2:%d,%6.2f\n", p->num, p->score);
}