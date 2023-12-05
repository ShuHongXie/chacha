#include <stdio.h>

void main()
{
  int arr[] = {4, 2, 1, 5};
  int len = 4;

  // 插入排序
  // for (int i = 1; i < len; i++)
  // {
  //   int j = i - 1;
  //   int curr = arr[i];
  //   while (j >= 0 && arr[j] > curr)
  //   {
  //     arr[j + 1] = arr[j];
  //     j--;
  //   }
  //   arr[j + 1] = curr;
  // }

  // 选择排序
  // for (int i = 0; i < len - 1; i++)
  // {

  //   int minIndex = i;
  //   // printf("%d\n", minIndex);
  //   for (int j = i + 1; j < len - 1; j++)
  //   {
  //     if (arr[minIndex] > arr[j])
  //     {
  //       minIndex = j;
  //     }
  //   }
  //   // printf("%d,%d\n", minIndex, i);
  //   if (minIndex != i)
  //   {
  //     int num = arr[i];
  //     arr[i] = arr[minIndex];
  //     arr[minIndex] = num;
  //   }
  // }

  // 冒泡排序
  for (int i = 0; i < len - 1; i++)
  {
    for (int j = 0; j < len - 1 - i; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        int num = arr[j + 1];
        arr[j + 1] = arr[j];
        arr[j] = num;
      }
    }
  }

  // 打印
  for (int i = 0; i < 4; i++)
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