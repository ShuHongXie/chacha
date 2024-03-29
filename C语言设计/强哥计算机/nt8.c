
#include <stdio.h>
int main()
{
  // int a[256] = {0};
  // char s[] = "##aaAAb00kk！！*&&***-*-";
  // int i = 0;
  // while (s[i] != '\0')
  // {
  //   a[s[i]]++;
  //   i++;
  // }
  // for (i = 0; i < 256; i++)
  //   if (a[i] != 0)
  //     printf("%c：%d次\n", i, a[i]);

  // printf("%d\n", ' ');
  // printf("%d", '\0');
  // struct stud
  // {
  //   /* data */
  //   int num;
  // } std1 = {3}, std2[3] = {3, 2, 1};
  // struct stud *z = &std1;
  // struct stud *s = std2;
  // ++s;
  // printf("%d\n", std1.num);
  // printf("%d\n", s->num);

  // double sn = 100, hn = sn / 2; // sn为第一次落地时走过的路程，hn为第一次弹回的高度
  // int n;                        // n为弹回的次数，用于循环中
  // for (n = 2; n <= 10; n++)
  // {
  //   sn = sn + 2 * hn; // 第二次落地时走过的路程 等于 第一次落地时走过的路程 + 第一次弹回的过程*2（弹回一次，落地一次所以一乘2）
  //   hn = hn / 2;      // 第三次弹回的路程是上一次的一半，所以除以2
  // }
  double h = 100.0;
  double sum = 0;
  for (int i = 0; i < 10; i++)
  {
    h = h / 2.0;
    sum += h;
  }
  printf("第十次落地时总共经过了%f米\n", sum);
  printf("第十次反弹%f米\n", h);

  return 0;
}