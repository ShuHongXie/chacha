#include <stdio.h>

void main()
{

  int binary_search(int *a, int n, int key);
  int arr[] = {0, 1, 16, 24, 35, 47, 59, 62, 73, 88, 99};
  printf("ֵΪ62���ڵ�%d��", binary_search(arr, 10, 62));
}

// �۰����/���ֲ���
int binary_search(int *a, int n, int key)
{
  int low, high, mid;
  low = 1;  // ��������±�Ϊ��λ
  high = n; // ��������±�Ϊ��¼ĩλ
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