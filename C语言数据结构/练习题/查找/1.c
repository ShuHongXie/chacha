#include <stdio.h>

void main()
{

  int binary_search(int *a, int n, int key);
  int arr[] = {4, 6, 10, 12, 20, 30, 50, 70, 88, 100};
  printf("??62?????%d??", binary_search(arr, 10, 58));
}

// ??????/???????
int binary_search(int *a, int n, int key)
{
  int low, high, mid;
  low = 1;  // ????????¡À????¦Ë
  high = n; // ????????¡À??????¦Ë
  while (low <= high)
  {
    mid = (low + high) / 2;
    printf("indexÎª%d\n", mid);
    printf("ÖµÎª%d\n", a[mid]);
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