#include <stdio.h>

/**
 * 7.3дһ�������oʹ������һ��3��3�Ķ�ά��������ת��,�����л�����
 */
void main()
{
  int arr[3][3] = {{1, 2, 3},
                   {4, 5, 6},
                   {7, 8, 9}};
  int cpyArr[3][3] = {};
  printf("���鳤��Ϊ%d\n", sizeof(arr) / sizeof(arr[0]));
  for (int i = 0; i < 3; i++)
  {
    for (int j = i; j < 3; j++)
    {
      // cpyArr[i][j] = arr[j][i];
      int num = arr[i][j];
      arr[i][j] = arr[j][i];
      arr[j][i] = num;
      // printf("%d,", arr[i][j]);
    }
  }
  printf("\n");
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("%d,", arr[i][j]);
    }
    printf("\n");
  }
}