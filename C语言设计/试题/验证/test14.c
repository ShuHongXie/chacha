#include <stdio.h>

void main()
{
  char str[81];
  int i, num = 0, word = 0;
  char c;
  gets(str);
  for (i = 0; (c = str[i]) != '\0'; i++)
  {
    if (c == ' ')
    {
      word = 0;
    }
    else if (!word)
    {
      word = 1;
      printf("%c\n", c);
      num++;
    }
  }
  printf("¹²ÓÐ%d¸öµ¥´ÊÔÚÀïÃæ\n", num);

  // int i = 0;
  // if (!i)
  // {
  //   printf("iÎª0\n", i);
  //   i = 1;
  // }
  // else if (i == 1)
  // {
  //   printf("i=%d", i);
  // }
}

// void main()
// {
//   char *a = "this is ";
//   char *b = "life";
//   char str[20];
//   int i = 0, j = 0;

//   while (*(a + i) != '\0')
//   {
//     *(str + i) = *(a + i);
//     i++;
//   }
//   while (*(b + j) != '\0')
//   {
//     *(str + i + j) = *(b + j);
//     j++;
//   }
//   printf("%s", str);
// }

// void main()
// {
//   int a, b;
//   printf("ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½a,bï¿½ï¿½Öµï¿½ï¿½ï¿½Ã¿Õ¸ï¿½ï¿½ï¿½ï¿½\n");
//   scanf("%d,%d", &a, &b);
//   int *p1 = &a;
//   int *p2 = &b;
//   if (*p1 > *p2)
//   {
//     printf("%d,%d", *p2, *p1);
//   }
//   else
//   {
//     printf("%d,%d", *p1, *p2);
//   }
// }