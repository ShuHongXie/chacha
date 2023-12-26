#include <stdio.h>

int binarySearch(int arr[], int len, int key)
{
  int low = 1;
  int high = len;
  int mid;
  while (low <= high)
  {
    mid = (high + low) / 2;
    if (key > arr[mid])
    {
      low = mid + 1;
    }
    else if (key < arr[mid])
    {
      high = mid - 1;
    }
    else
    {
      return mid;
    }
  }
}

void main()
{
  int arr[] = {4, 2, 1, 5, 10, 6};
  int len = 6;
  int arr1[] = {1, 3, 7, 9, 11, 22, 63};

  // 插入排序
  // for (int i = 1; i < len; i++)
  // {
  //   int curr = arr[i];
  //   int j = i - 1;
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

  printf("查询值为3的下标为%d", binarySearch(arr1, 7, 3));
  // 遍历
  // for (int i = 0; i < 6; i++)
  // {
  //   printf("%d ", arr[i]);
  // }
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

// 二分查找
// int binarySearch(int *a, int n, int key)
// {

//   int low, high, mid;
//   low = 1;
//   high = n;
//   while (low <= high)
//   {
//     mid = (low + high) / 2;
//     if (key < a[mid])
//     {
//       high = mid - 1;
//     }
//     else if (key > a[mid])
//     {
//       low = mid + 1;
//     }
//     else
//     {
//       return mid;
//     }
//   }
// }

// 鎻掑叆鎺掑簭
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

// 閫夋嫨鎺掑簭
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