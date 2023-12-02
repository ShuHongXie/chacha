#include <stdio.h>

// ��ʽ����Ĭд
void main()
{
  void bubbleSort(int arr[], int len);
  void selectionSort(int arr[], int len);
  void insertSort(int arr[], int len);
  int arr[] = {3, 5, 2, 1, 6, 4};
  // bubbleSort(arr, 6); // ð������
  // selectionSort(arr, 6); // ѡ������
  insertSort(arr, 6);
  for (int i = 0; i < 6; i++)
  {
    printf("%d ", arr[i]);
  }
}

// ��������
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

// ѡ������
void selectionSort(int arr[], int len)
{
  for (int i = 0; i < len - 1; i++) // ��ð�ݵ�ԭ��һ��
  {
    int minIndex = i;
    for (int j = i + 1; j < len; j++)
    {
      // ����ҵ�һ��ֵ�ȵ�ǰ��С���ǾͰѵ�ǰ����������
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

// ð������
// ��һ��forѭ��-1����Ϊ�����һ��Ԫ��ʱ���ڲ�jѭ��û��Ҫ�Ƚ�
// �ڶ���forѭ��-i�ǣ�ǰһ��ѭ��������ֵ�Ž�β��û��Ҫ�Ƚ�
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