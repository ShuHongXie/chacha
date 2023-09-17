#include <stdio.h>

void main()
{

  int binary_search(int *a, int n, int key);
  int arr[] = {0, 1, 16, 24, 35, 47, 59, 62, 73, 88, 99};
  printf("值为62的在第%d个", binary_search(arr, 10, 62));
}

// 折半查找/二分查找
int binary_search(int *a, int n, int key)
{
  int low, high, mid;
  low = 1;  // 定义最低下标为首位
  high = n; // 定义最高下标为记录末位
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