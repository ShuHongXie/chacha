#include <stdio.h>

// ���������ַ���
void concat(char *p1, char *p2)
{
  while (*p1 != '\0')
  {
    p1++;
  }
  printf("%c\n", *p1);
  while (*p2 != '\0')
  {
    printf("%c,%c\n", *p1, *p2);
    *p1++ = *p2++;
  }
  *p1 = '\0';
}

// ��ӡ9*9�˷���
// for (int i = 1; i <= 9; i++)
// {
//   for (int j = 1; j <= i; j++)
//   {
//     printf("%d*%d=%d ", i, j, i * j);
//   }
//   printf("\n");
// }

int main()
{
  char s1[20] = "abcde";
  char s2[20] = "qwer";
  concat(s1, s2);
  puts(s1);

  // �� 1000 ���ڵĻ���������(����:�ڴ���1����Ȼ���У�ֻ�ܱ�1�ͱ�����������������2��3��5��7;������:���������һ������������:121��5005��989)
  int i, num, t_num = 0, t;
  for (num = 2; num < 1000; num++)
  {
    for (i = 2; i < num; i++)
      if (num % i == 0)
        break;
    if (i == num)
    {
      t = num;
      while (t != 0)
      {
        t_num = t_num * 10 + t % 10;
        t /= 10;
      }
      if (t_num == num)
        printf("%d ", num);
      t_num = 0;
    }
  }

  return 0;
}
