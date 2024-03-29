#include <stdio.h>

// 输入5个学生成绩 用选择排序排列出来
// void main()
// {
//   int arr[5];
//   printf("请输入5个学生的成绩");
//   for (int i = 0; i < 5; i++)
//     scanf("%d", &arr[i]);
//   for (int i = 0; i < 5; i++)
//   {
//     int curr = i;
//     for (int j = i + 1; j < 5; j++)
//       if (arr[curr] > arr[j])
//         curr = j;
//     if (curr != i)
//     {
//       int num = arr[i];
//       arr[i] = arr[curr];
//       arr[curr] = num;
//     }
//   }
//   printf("5个学生的成绩从小到大排列为\n");
//   for (int i = 0; i < 5; i++)
//     printf("%d,", arr[i]);
// }

int getmax(int a, int b)
{
  return a >= b ? a : b;
}

// 输入3个数 判断最大值并输出
// void main()
// {
//   int a, b, c;
//   printf("请输入3个数\n");
//   scanf("%d%d%d", &a, &b, &c);
//   int d = getmax(a, b);
//   printf("3个数中最大的数为%d", getmax(d, c));
// }

// 从键盘输入一个整数，判断该整数是正数，负数还是零。
// void main()
// {
//   int a;
//   printf("请输入a的值:");
//   scanf("%d", &a);
//   if (a > 0)
//     printf("a为正数");
//   else if (a < 0)
//     printf("a为负数");
//   else
//     printf("a为零");
// }

/*
有一个学校有10 个班级，每一个班级有 30 名到50名学生，
且每个班级的学生数不同。从键盘输入这 10个班级的学生数，
放入会个一维数组中。从键盘输入一个整数y，
判断 10 个班级中是否有和y相等的学生数。如果有，输出“Success”，否则输出“Fail
*/

void main()
{
  int arr[10], y;
  printf("请输入10个班级的人数");
  for (int i = 0; i < 10; i++)
  {
    scanf("%d", &arr[i]);
  }
  printf("\n请输入所要判断的数值:");
  scanf("%d", &y);
  for (int i = 0; i < 10; i++)
  {
    if (arr[i] == y)
    {
      printf("Success\n");
    }
    else
    {
      printf("Fail\n");
    }
  }
}
