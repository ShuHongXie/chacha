#include <stdio.h>

// 9分
// 用递归方法计算某单位职工年龄：已知第一位职工的年龄为20岁，其余职工后一个比前一个大3岁，求第七个职工的年龄。
// int getAge(int num, int age)
// {
//   if (num == 7)
//   {
//     return age;
//   }
//   else
//   {
//     ;
//     return getAge(++num, age = age + 3);
//   }
// }

// void main()
// {
//   int initAge = 20;
//   int i = 1;
//   int nextAge;
//   nextAge = getAge(i, initAge);
//   printf("第七个职工的年龄为%d", nextAge);
// }

/* 7
从键盘输入十个数，按降序排列后输出排序的结果
1）、必须用主、子函数调用完成程序。
2）、其中数据输入及排序后的结果输出在主函数中实现。
3）、排序功能在子函数中实现。
*/
void main()
{
  int sort(int arr[10]);
  int arrList[10];
  for (int i = 0; i < 10; i++)
  {
    scanf("%d", &arrList[i]);
  };
  sort(arrList);
  for (int i = 0; i < 10; i++)
  {
    printf("%d,", arrList[i]);
  }
}

int sort(int arr[10])
{
  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 10 - i - 1; j++)
    {
      if (arr[j] < arr[j + 1])
      {
        int num = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = num;
      }
    }
  }
}
