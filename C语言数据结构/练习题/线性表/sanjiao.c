#include <stdio.h>

int main()
{
  int a[5][5] = {
      1, 0, 0, 0, 0,
      5, 9, 0, 0, 0,
      4, 6, 8, 0, 0,
      2, 3, 44, 55, 0,
      7, 11, 12, 13, 14};

  int len = sizeof(a[5]) / sizeof(int);
  int b[len * (len + 1) / 2], x, y, k;

  printf("ԭ��ά���飺\n"); // ���ԭ��ά����

  for (x = 0; x < len; x++)
  {
    for (y = 0; y < len; y++)
    {
      if (a[x][y] < 10)
      { // ʹ�������������
        printf("%d  ", a[x][y]);
      }
      else
      {
        printf("%d ", a[x][y]);
      }
    }

    printf("\n");
  }

  printf("ѹ�����һά����:\n");

  for (int i = 0; i < len; i++)
  { // ����ά�����з�0ֵѹ����һά������
    for (int j = 0; j < len; j++)
    {
      if (i >= j)
      {                          // �������ֻѹ�����ǵ�ֵ
        k = i * (i + 1) / 2 + j; // ��ά�����һά������ԭֵ�Ķ�Ӧ��ϵ
        printf("%d\n", k);
        b[k] = a[i][j];
      }
      else
        break; // ��������
    }
  }

  for (int l = 0; l < len * (len + 1) / 2; l++)
  { // ���һά����
    printf("%d ", b[l]);
  }

  printf("\n");
  printf("����Ҫ��ѯ�� �к�&&�к� : "); // ���Ҫ��ѯ������
  scanf("%d%d", &x, &y);
  printf("\n");
  printf("����ѯ��������: ");

  if (x < y)
    printf("0\n"); // ���������ֱ�����0
  else
    printf("%d\n", b[(x - 1) * (x) / 2 + y - 1]); // ���������һά�����ж�Ӧ��ֵ

  return 0;
}