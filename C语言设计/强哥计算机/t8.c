#include <stdio.h>

void main()
{
  // 计算字符个数；
  // char str[256];
  // int strs[256] = {0};
  // scanf("%s", str);
  // for (int i = 0; str[i] != '\0'; i++)
  // {
  //   ++strs[str[i]];
  // }
  // for (int i = 0; i < 256; i++)
  // {
  //   if (strs[i])
  //   {
  //     printf("字符%c的个数为%d\n", i, strs[i]);
  //   }
  // }

  // 计算对角线元素
  int arr[3][3] = {1, 5, 9, 2, 0, 5, 3, 7, 8};
  int i, sum = 0, curr = 0;
  for (i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      if (j == curr)
      {
        sum += arr[i][j];
      }
    }
    curr++;
  }
  printf("主对角线元素之和为%d\n", sum);
}