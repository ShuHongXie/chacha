#include <stdio.h>
#define SQR(x) x *x

// main()

// {
//   char ch = 'A'; // C E G I x=16
//   int x = 8;
//   while (ch <= 'H')
//   {
//     printf("%c,", ch);
//     ch += 2;
//   }
//   printf("\n");
//   do
//   {
//     x--;
//     if (x % 3 == 0)
//       continue;
//     printf("%d,", x);

//   } while (x > 0);
// }

// CEGI 14131110875421

// int func(int a, int b)
// {
//   // ��һ�Σ�a=4, b=1 �ڶ��Σ�a = 4, b=1
//   static int m = 0, i = 2;
//   i += m + 1;    // ��һ�Σ�m = 0, i = 2, i = 2 + 0 + 1 = 3 // �ڶ��Σ�m=8,i = 3, i = 3+8+1 = 12
//   m = i + a + b; // ��һ�Σ�m = 3+4+1 =8 // �ڶ��� m = 12 + 4 + 1 = 17
//   return (m);
// }
// main()
// {
//   int k = 4, m = 1, n;

//   n = func(k, m);
//   printf("%d,", n);
//   n = func(k, m);
//   printf("%d", n);
//   // ���մ�ӡ�� 8,17
// }

// void swap(int *a, int *b)
// {
//   int *t;
//   t = a;
//   a = b;
//   b = t;
// }
// main()
// {
//   int x = 3, y = 5, *p = &x, *q = &y;
//   swap(p, q);
//   printf("%d,%d\n", *p, *q);
// }

int func(int a, int b)
{
  return (a + b);
}

void main()
{
  // ��׳�
  // int di(int num);
  // int num, gross;
  // printf("����������׳���\n");
  // scanf("%d", &num);
  // gross = di(num);
  // printf("%d�Ľ׳�Ϊ%d\n", num, gross);

  /*
  �Ӽ�������ʮ���������������к��������Ľ�����밴����Ҫ����ɣ�
  Ҫ��1)�������������Ӻ���������ɳ���
  2)������ʮ���������뼰�����Ľ���������������ʵ�֡�
  3)�����������Ӻ�����ʵ�֡�
  */
  // void bubbleSort(int arr[10]);
  // int arr[10];
  // printf("������10����\n");
  // for (int i = 0; i < 10; i++)
  // {
  //   scanf("%d", &arr[i]);
  // }
  // bubbleSort(arr);
  // printf("10�������������к�Ľ��Ϊ\n");
  // for (int i = 0; i < 10; i++)
  // {
  //   printf("%d ", arr[i]);
  // }

  struct student
  {
    char name[20];
    int age;
    char sex;
  } stu[5], *p;
  p = stu;
  scanf("%d", p->age);
}

void test()
{
}

void bubbleSort(int arr[10])
{
  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 10 - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        int t = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = t;
      }
    }
  }
}

int di(num)
{
  int sum = num;
  if (num <= 1)
  {
    return sum;
  }
  else
  {
    return sum * di(--num);
  }
}