#include <stdio.h>
#include <string.h>
// #include <sys/malloc.h>
#include <stdlib.h>
#define N 3
// #define LEN sizeof(struct student)

// int main()
// {
//   struct student
//   {
//     int num;
//     char name[20];
//     char sex;
//     char addr[20];
//   } student1 = {10101, "shuhongxie", 'M', "guangzhou"};
//   printf("NO.%d\nname:%s\nsex:%c\naddress:%s\n", student1.num, student1.name, student1.sex, student1.addr);
//   return 0;
// }

// int main()
// {
//   struct person
//   {
//     char name[20];
//     int count;
//   } leader[3] = {"Li", 0, "Zhange", 0, "Fun", 0};
// }

// struct person
// {
//   char name[20];
//   int count;
// } leader[3] = {"Li", 0, "Zhange", 0, "Fun", 0};

// struct person isthis[4] = {"Li1", 4, "Zhange1", 3, "Fun1", 0, "SRR", 19};

// int main()
// {

//   int i, j;
//   char leader_name[20];
//   for (i = 0; i < 10; i++)
//   {
//     scanf("%s", leader_name);
//     for (j = 0; j < 3; j++)
//     {
//       if (strcmp(leader_name, leader[j].name) == 0)
//       {
//         leader[j].count++;
//       }
//     }
//   }
//   printf("\nResult:\n");
//   for (i = 0; i < 3; i++)
//   {
//     printf("%5s:%d\n", leader[i].name, leader[i].count);
//   }
//   return 0;
// }

// �ṹ���ӡ
// int main()
// {
//   for (int i = 0; i < 4; i++)
//   {
//     printf("%s,%d\n", isthis[i].name, isthis[i].count);
//   }
// }

// �ṹ������ָ��
// int main()
// {
//   struct student
//   {
//     long num;
//     char name[20];
//     char sex;
//     float score;
//   };
//   struct student stu_1;
//   struct student *p;
//   p = &stu_1;
//   stu_1.num = 10101;
//   strcpy(stu_1.name, "Xie small xie");
//   stu_1.sex = 'M';
//   stu_1.score = 89.5;
//   printf("No.:%ld\nname:%s\nsex:%c\nscore:%5.lf\n", stu_1.num, stu_1.name, stu_1.sex, stu_1.score);
//   // printf("No.:%ld\nname:%s\nsex:%c\nscore:%5.lf\n", (*p).num, (*p).name, (*p).sex, (*p).score);
//   printf("No.:%ld\nname:%s\nsex:%c\nscore:%5.lf\n", p->num, p->name, p->sex, p->score);
//   return 0;
// }

// �ṹ������ָ��
// int main()
// {
//   struct student
//   {
//     int num;
//     char name[20];
//     char sex;
//     int age;
//   };
//   struct student stu[3] =
//       {
//           {11010, "Li Lin", 'M', 18},
//           {11012, "Xie Small", 'F', 23},
//           {11013, "Wnag data", 'M', 90}};
//   struct student *p;
//   for (p = stu; p < stu + 3; p++)
//   {
//     printf("%5d%-20s%2c%4d\n", p->num, p->name, p->sex, p->age);
//   }
//   return 0;
// }

// �ṹ�庯��ָ��
// struct student
// {
//   int num;
//   char name[20];
//   float score[3];
//   float aver;
// };

// int main()
// {
//   void input(struct student stu[]);
//   struct student max(struct student stu[]);
//   void print(struct student stu);
//   struct student stu[N], *p = stu;
//   input(p);
//   print(max(p));
//   return 0;
// }

// void input(struct student stu[])
// {
//   int i;
//   printf("�������ѧ������Ϣ��ѧ�ţ��źţ����ųɼ�:\n");
//   for (i = 0; i < N; i++)
//   {
//     scanf("%d %s %f %f %f", &stu[i].num, &stu[i].name, &stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);
//     stu[i].aver = (stu[i].score[0] + stu[i].score[1] + stu[i].score[2]) / 3.0;
//   }
// }

// struct student max(struct student stu[])
// {
//   int i, m = 0;
//   for (i = 0; i < N; i++)
//   {
//     if (stu[i].aver > stu[m].aver)
//     {
//       m = i;
//     }
//   }
//   return stu[m];
// }

// void print(struct student stud)
// {
//   printf("\n �ɼ���ߵ�ѧ����: \n");
//   printf("%s", stud.name);
// }

// �ṹ�徲̬�����ʾ
// struct student
// {
//   int num;
//   float score;
//   struct student *next;
// };

// int main()
// {
//   struct student a, b, c, *head, *p;
//   a.num = 10101;
//   a.score = 89.5;
//   b.num = 10103;
//   b.score = 90;
//   c.num = 10101;
//   c.score = 85;
//   head = &a;
//   a.next = &b;
//   b.next = &c;
//   c.next = NULL;
//   p = head;

//   do
//   {
//     printf("ld %5.lf\n", p->num, p->score);
//     p = p->next;
//   } while (p != NULL);
//   return 0;
// }

// �ṹ�嶯̬������ʾ(���ٶ�̬�ռ�)

// struct student
// {
//   int num;
//   float score;
//   struct student *next;
// };

// int main()
// {
//   struct student *head, *p;
//   // ��������
//   head = p = (struct student)malloc(LEN); // ����һ���µ�Ԫ����p��headָ����
//   scanf("%d, %f", &p->num, &p->score);    // �����һ����������
//   p = (struct student *)malloc(LEN);      // ���ٵڶ����µ�Ԫ������Pָ����
//   scanf("%d,%f", &p->num, &p->score);     // ����ڶ�����������
//   head->next = p;                         // ʹ��1������е�next��Աָ��ڶ������
//   p->next = NULL;                         // ʹ��2������е�next��Ա��ָ���κζ���
//   // �����������е�����
//   p = head;
//   printf("\n���1��%d,%6.2f\n", p->num, p->score);
//   p = p->next;
//   printf("���2��%d,%6.2f\n", p->num, p->score);
//   return 0;
// }
