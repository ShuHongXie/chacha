#include <stdio.h>

/**
 * 8.3 ����5 ������,��������С�������һ�����Ի�,�������������һ�����Ի�
 * д 3 ��������:1. ���� 5 ����; 2�����д���; 3.��� 5 ������
 */
void main()
{
  int *getTenNumber();
  int *translateFn(int *arr);
  void printFn(int *arr);
  int *arr = *getTenNumber();
  printf("%d\n", sizeof(*arr));
  // for (int i = 0; i < 5; i++)
  // {
  //   printf("%d\n", *(arr + i));
  // }
  *arr = *translateFn(*arr);
  printf("ִ��\n");
  printFn(*arr);
}

int *getTenNumber()
{
  printf("===========1==========\n");
  static int arr[5];
  for (int i = 0; i < 5; i++)
  {
    scanf("%d", &arr[i]);
  }
  return arr;
}

int *translateFn(int *arr)
{
  printf("===========2==========\n");
  int max = *arr, min = *arr, i = 0;
  for (; i < 5; i++)
  {
    if (*(arr + i) > max)
    {
      max = *(arr + i);
    }
    else if (*(arr + i) < min)
    {
      min = *(arr + i);
    }
  }
  for (i = 0; i < 5; i++)
  {
    if (*(arr + i) == min)
    {
      int p = *arr;
      *arr = min;
      *(arr + i) = p;
    }
    if (*(arr + i) == max)
    {
      int p = *(arr + 4);
      *(arr + 4) = max;
      *(arr + i) = p;
    }
  }
  return arr;
}

void printFn(int *arr)
{
  printf("===========3==========\n");
  for (int i = 0; i < 5; i++)
  {
    printf("%d", *(arr + i));
  }
}