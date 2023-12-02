#include <stdio.h>

// 各式排序默写
void main()
{
  void bubbleSort(int arr[], int len);
  void selectionSort(int arr[], int len);
  void insertSort(int arr[], int len);
  int arr[] = {3, 5, 2, 1, 6, 4};
  // bubbleSort(arr, 6); // 冒泡排序
  // selectionSort(arr, 6); // 选择排序
  insertSort(arr, 6);
  for (int i = 0; i < 6; i++)
  {
    printf("%d ", arr[i]);
  }
}

// 插入排序
void insertSort(int arr[], int len)
{
  for (int i = 1; i < len; i++)
  {
    int key = arr[i];
    int j = i - 1;
    while (j >= 0 && arr[j] > key)
    {
      arr[j + 1] = arr[j];
      j--;
      printf("%d\n", j);
    }
    arr[j + 1] = key;
  }
}

// 选择排序
void selectionSort(int arr[], int len)
{
  for (int i = 0; i < len - 1; i++) // 跟冒泡的原因一样
  {
    int minIndex = i;
    for (int j = i + 1; j < len; j++)
    {
      // 如果找到一个值比当前还小，那就把当前索引赋予它
      if (arr[j] < arr[minIndex])
      {
        minIndex = j;
      }
    }
    if (minIndex != i)
    {
      int num = arr[i];
      arr[i] = arr[minIndex];
      arr[minIndex] = num;
    }
  }
}

// 冒泡排序
// 第一个for循环-1是因为到最后一个元素时，内部j循环没必要比较
// 第二个for循环-i是，前一次循环会把最大值放结尾，没必要比较
void bubbleSort(int arr[], int len)
{
  for (int i = 0; i < len - 1; i++)
  {
    for (int j = 0; j < len - 1 - i; j++)
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