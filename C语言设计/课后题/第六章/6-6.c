#include <stdio.h>

// ½«86541ÄæĞò´æ·Å
void main()
{
  int arr[5] = {8, 6, 5, 4, 1};
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4 - i; j++)
    {

      if (arr[j] > arr[j + 1])
      {
        int rep = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = rep;
      }
    }
    for (int i = 0; i < 5; i++)
    {
      printf("%d", arr[i]);
    }
    printf("\n");
  }
  for (int i = 0; i < 5; i++)
  {
    // printf("%d", arr[i]);
  }
}