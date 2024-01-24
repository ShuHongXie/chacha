#include <stdio.h>

// �۰����
void binarySearch(int arr[], int len, int key)
{
  int low = 0;
  int high = len - 1;
  int mid;
  while (low <= high)
  {
    mid = (low + high) / 2;
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
      printf("�ؼ���Ϊ%d���±�Ϊ%d\n", key, mid);
      return;
    }
  }
  printf("�ؼ���Ϊ%d���±�δ�ҵ�", key);
}

void main()
{
  int arr[] = {4, 2, 1, 5, 10, 6};
  int len = 6;
  int arr1[] = {1, 3, 7, 9, 11, 22, 63};

  // ѡ������
  // for (int i = 0; i < len - 1; i++)
  // {
  //   int index = i;
  //   for (int j = i + 1; j < len; j++)
  //   {
  //     if (arr[index] > arr[j])
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

  // ��������
  // for (int i = 1; i < len; i++)
  // {
  //   int j = i - 1;
  //   int curr = arr[i]; // ����һ��Ҫ��������Ȼ���������arr[j+1] = arr[j]���ı��
  //   while (j >= 0 && arr[j] > curr)
  //   {
  //     arr[j + 1] = arr[j];
  //     j--;
  //   }
  //   arr[j + 1] = curr;
  // }

  binarySearch(arr1, 7, 3);
  // ����
  // for (int i = 0; i < len; i++)
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