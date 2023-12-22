#include <stdio.h>

// 二分查找
int binarySearch(int *a, int n, int key)
{

  int low, high, mid;
  low = 1;
  high = n;
  while (low <= high)
  {
    mid = (low + high) / 2;
    if (key < a[mid])
    {
      high = mid - 1;
    }
    else if (key > a[mid])
    {
      low = mid + 1;
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
  int arr1[] = {1, 3, 7, 9, 11, 22, 63};

  // 閫夋嫨鎺掑簭
  // for (int i = 0; i < len - 1; i++)
  // {
  //   int curr = i;
  //   for (int j = i + 1; j < len; j++)
  //   {
  //     if (arr[j] < arr[curr])
  //     {
  //       curr = j;
  //     }
  //   }
  //   if (curr != i)
  //   {
  //     int temp = arr[i];
  //     arr[i] = arr[curr];
  //     arr[curr] = temp;
  //   }
  // }

  // 鎻掑叆鎺掑簭
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

  printf("查询值为6的下标为%d", binarySearch(arr1, 7, 1));
  // 鎵撳嵃
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