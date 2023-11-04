#include <stdio.h>
#include <string.h>
// main()
// {
//   static char s[30] = "abcdefg";
//   static char t[] = "abcd";
//   int i, j;
//   i = 0;
//   while (s[i] != '\0')
//     i++;
//   j = 0; // i = 7, j =0
//   whi1e(t[j] != '\0')
//   {
//     s[i + j] = t[j];
//     j++;
//   }
//   s[i + j] = '\0';
//   printf("%s\n", s);
// }

// main()

// {
//   char ch[2][5] = {"6937",
//                    "8254"},
//        *p[2];
//   int i, j, s = 0;
//   for (i = 0; i < 2; i++)
//     p[i] = ch[i]; // p = { ch[1], ch[2] }
//   for (i = 0; i < 2; i++)
//     for (j = 0; p[i][j] > '\0'; j += 2)
//       s = 10 * s + p[i][j] - '0';
//   printf("%d\n", s);
//   // ��һ�� s = 10 * 0 + 6 - '0' = 6
//   // �ڶ��� s = 6*10+ 3 - '0' = 63
//   // ������ s = 63*10 + 8 - '0' = 638
//   // ������ s = 638*10 + 5 - '0' = 6385
// }

// int letter, digit, space, others;
// /*��ȫ�ֱ���*/
// void main()
// {
//   int count(char _____(1) _____);
//   char text[80];
//   printf("\nlnput string:\n");
//   ____(2)
//   ___;
//   printf("string:");
//   puts(text);
//   letter = 0;
//   digit = 0;
//   space = 0;
//   others = 0;
//   _____(3)
//   _____;
//   printf("letter:%d,digit:%d,space:%d,other:%d\n", letter, digit, space, others);
// }
// int count(char str[])
// {
//   int i;
//   for (i = 0; str[i] != '\0'; i++)
//     if ((____(4) ____ >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
//       letter++;
//     else if (str[i] >= '0' && str[i] <= '9')
//       digit++;
//     else if (str[i] == ' ')
//       space++;
//     else
//       ____(5)
//   ____;
// }

// main()
// {
//   int m;
//   char ___(6) ____, str2[20], *p1, *p2;
//   printf("Input two string:\n");
//   scanf("%s", str1);
//   scanf("%s", ___(7) ______);
//   p1 = &str1[0];
//   p2 = _____(8) _____;
//   m = strcmp(p1, p2);
//   printf("result:%d,\n", m);
// }
// strcmp(char ___(9) _____, char *p2)
// /*�����ַ����Ƚϵĺ���*/
// {
//   int i;
//   ____(10)
//   ______;
//   while (*(p1 + i) == *(p2 + i))
//      if (*(p1 + i++) == '\0') return (0);
//   return (*(p1 + i) - *(p2 + i)); /*����ʱ���ؽ��Ϊ��һ�������ַ�ASCII��Ĳ�ֵ*/
// }

int abc(char *ps)
{
  char *p;
  p = ps;
  printf("%d\n", ps);
  printf("------------");
  while (*p++)
  {
    printf("%d\n", *p++);
  };
  return (p - ps);
}

void main()
{
  char *s = "\t\'Name \\Address\n";
  // printf("%d", strlen(s));

  // int x[8] = {8, 7, 6, 5, 0, 0}, *s;
  // s = x + 3;
  // printf("%d\n", s[0]);
  // abc(s);
  printf("%d", abc(s));
}