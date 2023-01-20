#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
  void orderThreeInteger();
  void orderThreeString();
  void formatFour();
  void moveMn(int n, int m);
  void getStringLen();
  void formatNewStr();
  void findTypeFunc();
  // orderThreeInteger();
  // orderThreeString();
  // formatFour();
  // moveMn(6, 2);
  // getStringLen();
  // formatNewStr();
  findTypeFunc();
  return 0;
}

// 8-1.����3������������С����˳�����
void orderThreeInteger()
{
  void sortInt(int *num1, int *num2);
  int a, b, c;
  scanf("%d,%d,%d", &a, &b, &c);
  int *p1 = &a, *p2 = &b, *p3 = &c;
  if (*p1 > *p2)
    sortInt(p1, p2);
  if (*p1 > *p3)
    sortInt(p1, p3);
  if (*p2 > *p3)
    sortInt(p2, p3);
  printf("������С��������Ϊ%d,%d,%d", *p1, *p2, *p3);
}

void sortInt(int *num1, int *num2)
{
  int temp;
  temp = *num1;
  *num1 = *num2;
  *num2 = temp;
}

// 8-2.����3���ַ���������С����˳�����
void orderThreeString()
{
  void sortString(char *c1, char *c2);
  char a1[100], a2[100], a3[100];
  gets(a1);
  gets(a2);
  gets(a3);
  if (strcmp(a1, a2) > 0)
    sortString(a1, a2);
  if (strcmp(a1, a3) > 0)
    sortString(a1, a3);
  if (strcmp(a2, a3) > 0)
    sortString(a2, a3);
  printf("�ַ�����С��������Ϊ%s,%s,%s", a1, a2, a3);
}

void sortString(char *c1, char *c2)
{
  char temp[100];
  strcpy(temp, c1);
  strcpy(c1, c2);
  strcpy(c2, temp);
}

// 8-3.����10(����ֻд4��)����������������С�����͵�һ�����Ի����������������һ�����Ի�
void formatFour()
{
  void formatMax(int arr[], int max, int min);
  printf("������4������");
  int arr[4], i;
  for (i = 0; i < 4; i++)
  {
    scanf("%d", &arr[i]);
  }
  int max = arr[0];
  int min = arr[0];
  printf("%d,%d", max, min);
  printf("����ѭ���߼�\n");
  formatMax(arr, max, min);
  for (i = 0; i < 4; i++)
  {
    printf("%d", *(arr + i));
  }
}

void formatMax(int arr[], int max, int min)
{

  int i, temp;
  for (i = 0; i < 4; i++)
  {

    if (max < *(arr + i))
    {
      max = *(arr + i);
    }
    if (min > *(arr + i))
    {
      min = *(arr + i);
    }
  }
  printf("���ֵΪ%d����СֵΪ%d\n", max, min);
  for (i = 0; i < 4; i++)
  {
    if (*(arr + i) == max)
    {
      temp = *(arr + i);
      *(arr + i) = *(arr + 3);
      *(arr + 3) = temp;
    }
    else if (*(arr + i) == min)
    {
      temp = *(arr + i);
      *(arr + i) = *(arr + 0);
      *(arr + 0) = temp;
    }
  }
}

// 8-4. ��n��������ʹǰ�����˳������ƶ�m��λ�ã����m�������ǰ��m������
// дһ����ʵ�����Ϲ��ܣ���������������n������������������n������
void moveMn(int n, int m)
{
  printf("%d,%d\n", n, m);
  printf("����������Ԫ��\n");
  int arr[n];
  int i;
  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  int moveArr[m];
  for (i = 0; i < m; i++)
  {
    *(moveArr + i) = *(arr + n - m + i);
  }
  // printf("%d\n", n - m);
  // printf("-----\n");
  for (i = n; i > m; i--)
  {
    *(arr + i - 1) = *(arr + i - m - 1);
  }
  // printf("ת��%d�������ֵΪ\n", m);
  for (i = 0; i < n; i++)
  {
    if (i < m)
    {
      *(arr + i) = *(moveArr + i);
    }
    printf("%d", *(arr + i));
  }
}

// 8-5. ��n��ѧ��Χ��һ�ţ�˳���źţ��ӵ�һ��ѧ����ʼ����(��1��3����),������3��ѧ���˳�Ȧ�ӣ�
// �����ֻ����һ��ѧ������������������ǵڼ���

// 8-6����дһ���������ַ����ĳ��ȣ��ں����������ַ����������䳤��
void getStringLen()
{
  // char c[100];
  // gets(c);
  // char *p = c;
  // printf("%d", strlen(p));
}

// 8-7. �ַ���a����ΪMy name is Li jilin���ַ���b����ΪMr Zhang HaoLing is very happy.
// дһ���������ַ���b�е�5-17���ַ���Zhang Haoling��ֵ���ַ���a�У�ȡ��Li jinlin,����µ��ַ���a

void formatNewStr()
{
  char a1[100] = "My name is Li jilin";
  char a2[] = "Mr Zhang HaoLing is very happy";
  char a3[20] = "";
  char *p1 = a1, *p2 = a2;
  char *p3 = a3;
  int i = 0;
  // ָ��д��
  for (; *p2 != '\0'; p2++, i++)
  {

    if (i >= 3 && i <= 16)
    {
      *p3 = *p2;
      if (i == 16)
      {
        *p3 = '\0'; // p3��ʾ����
        break;
      }
      else
      {
        p3++;
      }
    }
  }
  p3 = a3; // ָ��ָ�ص�һ��
  for (i = 0; i < 100; p1++, i++)
  {
    if (i >= 11)
    {
      *p1 = *p3;
      p3++;
    }
  }
  p1 = a1;
  for (; *p1 != '\0'; p1++)
  {
    printf("%c", *p1);
  }
  printf("\n");
  printf("a1=%s\n", a1);
  printf("a3=%s\n", a3);
}

// 8-8.����һ�����֣��ҳ����д�д��ĸ��Сд��ĸ���ո������Լ������ַ����ж���
void findTypeFunc()
{
  void findType(char *charlist)
  {
    int upperCaseCount = 0;
    int lowerCaseCount = 0;
    int spaceCount = 0;
    int numberCount = 0;
    int otherCount = 0;
    for (; *charlist != '\0'; charlist++)
    {
      // printf("%d\n", *charlist);
      if (*charlist == 32)
      {
        spaceCount++;
      }
      else if (*charlist > 64 && *charlist < 91)
      {
        upperCaseCount++;
      }
      else if (*charlist > 96 && *charlist < 123)
      {
        lowerCaseCount++;
      }
      else if (*charlist > 47 && *charlist < 58)
      {
        numberCount++;
      }
      else
      {
        otherCount++;
      }
    }
    printf("��ǰ���������У���д��ĸ��%d����Сд��ĸ��%d�����ո���%d����������%d���������ַ���%d��", upperCaseCount, lowerCaseCount, spaceCount, numberCount, otherCount);
  }
  char str[100];
  gets(str);
  char *str1 = str;
  findType(str1);
}
