#include <stdio.h>

// 9��
// �õݹ鷽������ĳ��λְ�����䣺��֪��һλְ��������Ϊ20�꣬����ְ����һ����ǰһ����3�꣬����߸�ְ�������䡣
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
//   printf("���߸�ְ��������Ϊ%d", nextAge);
// }

/* 7
�Ӽ�������ʮ���������������к��������Ľ��
1���������������Ӻ���������ɳ���
2���������������뼰�����Ľ���������������ʵ�֡�
3�������������Ӻ�����ʵ�֡�
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
