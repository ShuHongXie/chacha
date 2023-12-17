#include <stdio.h>

void main()
{
  int arr[] = {4, 2, 1, 5, 10, 6};
  int len = 6;

  // 选择排序
  // for (int i = 0; i < len; i++)
  // {
  //   int key = i;
  //   for (int j = i + 1; j < len; j++)
  //   {
  //     if (arr[key] > arr[j])
  //     {
  //       key = j;
  //     }
  //   }
  //   if (key != i)
  //   {
  //     int temp = arr[i];
  //     arr[i] = arr[key];
  //     arr[key] = temp;
  //   }
  // }

  // 插入排序
  for (int i = 1; i < len; i++)
  {
    int curr = arr[i];
    int j = i - 1;
    while (j >= 0 && arr[j] > curr)
    {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = curr;
  }

  // 打印
  for (int i = 0; i < 6; i++)
  {
    printf("%d ", arr[i]);
  }
}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
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