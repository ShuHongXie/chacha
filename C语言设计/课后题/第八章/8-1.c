#include <stdio.h>

/**
 * 8.1 ���� 3 ������������С�����˳�����
 */

void main()
{
  void printFn(int *arr, int len);
  int arr[3];
  for (int i = 0; i < 3; i++)
  {
    scanf("%d", &arr[i]);
  }
  printFn(arr, 3);
}

void printFn(int *arr, int len)
{
  printf("�����߼�\n");
  int p;
  for (int i = 0; i < len; i++)
  {
    for (int j = 0; j < len - i - 1; j++)
    {
      if (*(arr + j) > *(arr + j + 1))
      {
        p = *(arr + j);
        *(arr + j) = *(arr + j + 1);
        *(arr + j + 1) = p;
      }
    }
  }
  for (int i = 0; i < len; i++)
  {
    printf("%d", *(arr + i));
  }
}
