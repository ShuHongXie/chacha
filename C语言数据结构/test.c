#include <stdio.h>

void main()
{
  int arr[] = {4, 2, 1, 5, 10, 6};
  int len = 6;

  // 插入排序
  for (int i = 1; i < len; i++)
  {
    int j = i - 1;
    int curr = arr[i];
    while (j >= 0 && arr[j] > curr)
    {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = curr;
  }

  // 选择排序
  // for (int i = 0; i < len - 1; i++)
  // {
  //   int minIndex = i;
  //   for (int j = i + 1; j < len; j++)
  //   {
  //     if (arr[minIndex] > arr[j])
  //     {
  //       minIndex = j;
  //     }
  //   }
  //   if (minIndex != i)
  //   {
  //     int temp = arr[i];
  //     arr[i] = arr[minIndex];
  //     arr[minIndex] = temp;
  //   }
  // }

  // 打印
  for (int i = 0; i < 6; i++)
  {
    printf("%d ", arr[i]);
  }
}

// 插入排序
// for (int i = 1; i < len; i++)
// {
//   int key = arr[i];
//   int j = i - 1;
//   while (j >= 0 && arr[j] > key)
//   {
//     arr[j + 1] = arr[j];
//     j--;
//   }
//   arr[j + 1] = key;
// }

// 选择排序
// for (int i = 0; i < len - 1; i++)
// {
//   int index = i;
//   for (int j = i + 1; j < len; j++)
//   {
//     if (arr[j] < arr[index])
//     {
//       index = j;
//     }
//   }
//   if (index != i)
//   {
//     int temp = arr[i];
//     arr[i] = arr[index];
//     arr[index] = temp;
//   }
// }