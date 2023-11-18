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
//   // 第一次：a=4, b=1 第二次：a = 4, b=1
//   static int m = 0, i = 2;
//   i += m + 1;    // 第一次：m = 0, i = 2, i = 2 + 0 + 1 = 3 // 第二次：m=8,i = 3, i = 3+8+1 = 12
//   m = i + a + b; // 第一次：m = 3+4+1 =8 // 第二次 m = 12 + 4 + 1 = 17
//   return (m);
// }
// main()
// {
//   int k = 4, m = 1, n;

//   n = func(k, m);
//   printf("%d,", n);
//   n = func(k, m);
//   printf("%d", n);
//   // 最终打印： 8,17
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
  // 求阶乘
  // int di(int num);
  // int num, gross;
  // printf("请输入所求阶乘数\n");
  // scanf("%d", &num);
  // gross = di(num);
  // printf("%d的阶乘为%d\n", num, gross);

  /*
  从键盘输入十个数，按升序排列后输出排序的结果，请按以下要求完成，
  要求：1)、必须用主、子函数调用完成程序。
  2)、其中十个数的输入及排序后的结果输出在主函数中实现。
  3)、排序功能在子函数中实现。
  */
  // void bubbleSort(int arr[10]);
  // int arr[10];
  // printf("请输入10个数\n");
  // for (int i = 0; i < 10; i++)
  // {
  //   scanf("%d", &arr[i]);
  // }
  // bubbleSort(arr);
  // printf("10个数按升序排列后的结果为\n");
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