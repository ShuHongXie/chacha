#include <stdio.h>

void main()
{
  void bubbleSort(int arr[9], int len);
  int arr[9] = {9, 1, 5, 8, 3, 7, 4, 6, 2};
  bubbleSort(arr, 9);
}

// 冒泡排序
void bubbleSort(int arr[9], int len)
{
  for (int i = 0; i < len - 1; i++)
  {
    for (int j = 0; j < len - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        int num = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = num;
      }
    }
    // for (int i = 0; i < 9; i++)
    // {
    //   printf("%d", arr[i]);
    // }
    // printf("\n");
  }
  for (int i = 0; i < 9; i++)
  {
    printf("%d", arr[i]);
  }
}