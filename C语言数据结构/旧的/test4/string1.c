#include <stdio.h>
#include <string.h>
#define MAXLEN 35;

// ��˳��洢������̶�����
// typedef struct
// {
//   char ch[MAXLEN + 1]; // �洢���е�һά����
//   int length;          // ���ĳ���
// }

int getIndex1(char str[], char t[], int pos)
{
  int i = pos, j = 0;
  while (i < strlen(str) && j < strlen(t))
  {
    printf("%c,%c\n", str[i], t[j]);
    if (str[i] == t[j])
    {
      ++i;
      ++j;
    }
    else
    {
      i = i - j + 1;
      printf("----%d,%d----\n", i, j);
      j = 0;
      printf("----%d,%d----\n", i, j);
    }
    printf("%d,%d\n", i, j);
  }

  if (j >= strlen(t))
  {
    return i - strlen(t) + 1;
  }
  else
  {
    return 0;
  }
}

int main()
{
  char str[] = "aaaaaba";
  char t[] = "ba";
  int index = getIndex1(str, t, 2);
  printf("str��ƥ�䵽t���ַ����Ϊ��");
  printf("%d\n", index);
}
