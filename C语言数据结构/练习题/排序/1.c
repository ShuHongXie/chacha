#include <stdio.h>

void main()
{
  void bubbleSort(int arr[9], int len);
  void insertSort(int arr[], int len);
  void BInsertSort(int a[], int size);
  void SelectSort(int arr[], int len);
  int arr[9] = {9, 1, 5, 8, 3, 7, 4, 6, 2};

  // bubbleSort(arr, 9);
  insertSort(arr, 9);
  // BInsertSort(arr, 9);
  // SelectSort(arr, 9);
  // for (int i = 0; i < 9; i++)
  // {
  //   printf("%d", arr[i]);
  // }
}

// 直接插入排序
void insertSort(int arr[], int len)
{
  int i, j;
  int t;
  for (i = 1; i < len; i++)
  {
    t = arr[i];
    j = i - 1;
    while (j >= 0 && arr[j] > t)
    {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = t;
    for (int i = 0; i < 9; i++)
    {
      printf("%d ", arr[i]);
    }
    printf("\n");
  }
}

// 折半插入排序
void BInsertSort(int a[], int size)
{
  int i, j, low = 0, high = 0, mid;
  int temp = 0;
  for (i = 1; i < size; i++)
  {
    low = 0;
    high = i - 1;
    temp = a[i];
    // 采用折半查找法判断插入位置，最终变量 low 表示插入位置
    while (low <= high)
    {
      mid = (low + high) / 2;
      if (a[mid] > temp)
      {
        high = mid - 1;
      }
      else
      {
        low = mid + 1;
      }
    }
    // 有序表中插入位置后的元素统一后移
    for (j = i; j > low; j--)
    {
      a[j] = a[j - 1];
    }
    a[low] = temp; // 插入元素
    // printf(a, 8, i);
    for (int i = 0; i < 9; i++)
    {
      printf("%d ", a[i]);
    }
    printf("\n");
  }
}

// 冒泡排序
void bubbleSort(int arr[], int len)
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

// 选择排序
void SelectSort(int arr[], int len)
{
  for (int i = 0; i < len; i++)
  {
    int min = arr[i], exchangeIndex = 0;
    for (int j = i + 1; j < len; j++)
    {
      if (arr[j] < min)
      {
        min = arr[j];
        exchangeIndex = j;
      }
    }
    // 得出最小值后，和对应位置的值交换
    if (min != arr[i])
    {
      int num = arr[i];
      arr[i] = min;
      arr[exchangeIndex] = num;
    }
    // for (int i = 0; i < 9; i++)
    // {
    //   printf("%d", arr[i]);
    // }
    // printf("\n");
  }
}