
#include <stdio.h>
int main()
{
  // int a[256] = {0};
  // char s[] = "##aaAAb00kk����*&&***-*-";
  // int i = 0;
  // while (s[i] != '\0')
  // {
  //   a[s[i]]++;
  //   i++;
  // }
  // for (i = 0; i < 256; i++)
  //   if (a[i] != 0)
  //     printf("%c��%d��\n", i, a[i]);

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

  // double sn = 100, hn = sn / 2; // snΪ��һ�����ʱ�߹���·�̣�hnΪ��һ�ε��صĸ߶�
  // int n;                        // nΪ���صĴ���������ѭ����
  // for (n = 2; n <= 10; n++)
  // {
  //   sn = sn + 2 * hn; // �ڶ������ʱ�߹���·�� ���� ��һ�����ʱ�߹���·�� + ��һ�ε��صĹ���*2������һ�Σ����һ������һ��2��
  //   hn = hn / 2;      // �����ε��ص�·������һ�ε�һ�룬���Գ���2
  // }
  double h = 100.0;
  double sum = 0;
  for (int i = 0; i < 10; i++)
  {
    h = h / 2.0;
    sum += h;
  }
  printf("��ʮ�����ʱ�ܹ�������%f��\n", sum);
  printf("��ʮ�η���%f��\n", h);

  return 0;
}