#include <stdio.h>

void main()
{
  // �����ַ�������
  // char str[256];
  // int strs[256] = {0};
  // scanf("%s", str);
  // for (int i = 0; str[i] != '\0'; i++)
  // {
  //   ++strs[str[i]];
  // }
  // for (int i = 0; i < 256; i++)
  // {
  //   if (strs[i])
  //   {
  //     printf("�ַ�%c�ĸ���Ϊ%d\n", i, strs[i]);
  //   }
  // }

  // ����Խ���Ԫ��
  int arr[3][3] = {1, 5, 9, 2, 0, 5, 3, 7, 8};
  int i, sum = 0, curr = 0;
  for (i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      if (j == curr)
      {
        sum += arr[i][j];
      }
    }
    curr++;
  }
  printf("���Խ���Ԫ��֮��Ϊ%d\n", sum);
}