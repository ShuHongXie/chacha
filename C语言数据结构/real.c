#include <stdio.h>

// ����5��ѧ���ɼ� ��ѡ���������г���
// void main()
// {
//   int arr[5];
//   printf("������5��ѧ���ĳɼ�");
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
//   printf("5��ѧ���ĳɼ���С��������Ϊ\n");
//   for (int i = 0; i < 5; i++)
//     printf("%d,", arr[i]);
// }

int getmax(int a, int b)
{
  return a >= b ? a : b;
}

// ����3���� �ж����ֵ�����
// void main()
// {
//   int a, b, c;
//   printf("������3����\n");
//   scanf("%d%d%d", &a, &b, &c);
//   int d = getmax(a, b);
//   printf("3������������Ϊ%d", getmax(d, c));
// }

// �Ӽ�������һ���������жϸ����������������������㡣
// void main()
// {
//   int a;
//   printf("������a��ֵ:");
//   scanf("%d", &a);
//   if (a > 0)
//     printf("aΪ����");
//   else if (a < 0)
//     printf("aΪ����");
//   else
//     printf("aΪ��");
// }

/*
��һ��ѧУ��10 ���༶��ÿһ���༶�� 30 ����50��ѧ����
��ÿ���༶��ѧ������ͬ���Ӽ��������� 10���༶��ѧ������
������һά�����С��Ӽ�������һ������y��
�ж� 10 ���༶���Ƿ��к�y��ȵ�ѧ����������У������Success�������������Fail
*/

void main()
{
  int arr[10], y;
  printf("������10���༶������");
  for (int i = 0; i < 10; i++)
  {
    scanf("%d", &arr[i]);
  }
  printf("\n��������Ҫ�жϵ���ֵ:");
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
