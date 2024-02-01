#include <stdio.h>

// 折半查找
void binarySearch(int arr[], int len, int key)
{
  int low = 0;
  int high = len - 1;
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
      printf("查找关键字等于%d的值的下标为%d", key, mid);
      return;
    }
  }
  printf("关键字%d不在数组内", key);
}

// 插入排序
void insertSort(int arr[], int len)
{
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
}

// 选择排序
void selectSort(int arr[], int len)
{
  for (int i = 0; i < len - 1; i++)
  {
    int index = i;
    for (int j = i + 1; j < len; j++)
    {
      if (arr[j] < arr[index])
      {
        index = j;
      }
    }
    if (i != index)
    {
      int curr = arr[i];
      arr[i] = arr[index];
      arr[index] = curr;
    }
  }
}

// 冒泡排序
void bubbleSort(int arr[], int len)
{
  for (int i = 0; i < len; i++)
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
  }
}

void main()
{
  void insertSort(int arr[], int len);
  void selectSort(int arr[], int len);
  void bubbleSort(int arr[], int len);
  int arr[] = {4, 2, 1, 5, 10, 6};
  int len = 6;
  int arr1[] = {1, 3, 7, 9, 11, 22, 63};

  // insertSort(arr, len);
  // selectSort(arr, len);
  bubbleSort(arr, len);

  // binarySearch(arr1, 7, 100);
  // 遍历
  for (int i = 0; i < len; i++)
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

// ???????
// int binarySearch(int *a, int n, int key)
// {
//   int low = 0, high = len - 1, mid;
// while (low <= high)
// {
//   mid = (low + high) / 2;
//   if (arr[mid] > key)
//   {
//     high = mid - 1;
//   }
//   else if (arr[mid] < key)
//   {
//     low = mid + 1;
//   }
//   else
//   {
//     return mid;
//     break;
//   }
// }
// if (low > high)
// {
//   printf("????????\n");
// }
// }

// ????
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

// ????
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