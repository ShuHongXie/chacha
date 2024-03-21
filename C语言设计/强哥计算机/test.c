#include <stdio.h>
#include <string.h>

enum Color
{
  BLUE, // ע��������,���зָ���������;
  RED,
  PINK,
  BLACK,
  WHITE

};
int main()
{
  // enum Color color = BLUE;
  // printf("%d\n", color);
  // printf("%d\n", RED);
  // printf("%d\n", PINK);
  // printf("%d\n", sizeof(color));
  // printf("%d\n", sizeof(enum Color));
  // char str[] = "\xab\12\001\00\t";
  // int a;
  // float c;

  // char s1[20] = "he\0llo", s2[20] = "abcdef";
  // strcat(s1, s2 + 3);
  // printf("%c", s1[3]);
  // long num = 1, i;
  // printf("%d", -1 && -1);

  // ��ӡ9*9�˷���
  // for (int i = 1; i <= 9; i++)
  // {
  //   for (int j = 1; j <= i; j++)
  //   {
  //     printf("%d*%d=%d ", i, j, i * j);
  //   }
  //   printf("\n");
  // }

  // int arr[10];
  // int a;
  // for (int i = 0; i <= 9; i++)
  // {
  //   scanf("%d", &arr[i]);
  // }
  // scanf("%d", &a);
  // for (int i = 0; i <= 9; i++)
  // {
  //   if (arr[i] == a)
  //   {
  //     printf("%d", i + 1);
  //     return i;
  //   }
  // }
  // printf("not found");

  // char ch[7] = "12ab56";
  // int i, s = 0;
  // for (i = 0; ch[i] > '0' && ch[i] <= '9'; i += 1)
  // {
  //   printf("%c\n", ch[i]);
  //   s = 10 * s + ch[i] - '0';
  // }

  // printf("%d\n", s);

  // static int a[3][4] = {{1, 2, 3}, {4, 5}, {6, 7, 8}};
  // int *p;
  // p = a[0];
  // printf("%d", *p);

  int a, b;

  printf("%d", strlen("xyz\0hhh"));

  // p[1] = 2;

  return 0;
}