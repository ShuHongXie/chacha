#include <stdio.h>

void main()
{
  // int a, b;
  // int *p1, *p2;
  // a = 100;
  // b = 10;
  // p1 = &a;
  // p2 = &b;
  // printf("a=%d,b=%d\n", a, b);
  // printf("*p1=%d,*p2=%d\n", *p1, *p2);

  // ???????????10????????????��???????????????��???????
  /*
  int a[10] = {19, 17, 20, 18, 16, 22, 24, 15, 23, 25};
  int i, *p = a;
  for (int i = 0; i < 10; i++)
  {
    printf("%d,", a[i]);
  }
  printf("\n");
  for (int i = 0; i < 10; i++)
  {
    printf("%d,", *(a + i));
  }
  printf("\n");
  for (int i = 0; i < 10; i++)
  {
    printf("%d,", *(p + i));
  }
  printf("\n");
  for (p; p < (a + 10); p++)
  {
    printf("%d,", *p);
  }
  printf("\n");
  */

  // ָ��ı�����������
  // void swap(int *p1, int *p2);
  // int a, b;
  // int *p1, *p2;
  // scanf("%d,%d", &a, &b);
  // p1 = &a;
  // p2 = &b;
  // if (a < b)
  // {
  //   swap(p1, p2);
  // }
  // printf("max=%d,min=%d\n", a, b);

  // ָ�����ʹ��
  int a[10] = {19, 17, 20, 18, 16, 22, 24, 15, 23, 25};
  int i, *p = a;
  for (int i = 0; i < 10; i++)
  {
    printf("%d,", p[i]);
  }
}

void swap(int *p1, int *p2)
{
  // ��ȷ���
  // int temp;
  // temp = *p1;
  // *p1 = *p2;
  // *p2 = temp;

  // �������1
  // int *temp;  // ����δ��temp��ֵ������tempָ��ĵ�ԪҲ�ǲ���Ԥ���ģ���*temp������һ��λ�õĴ洢��Ԫ��ֵ��
  // *temp = *p1;
  // p1 = *p2;
  // p2 = *temp;

  // �������2
  // int *temp;
  // temp = p1;
  // p1 = p2;
  // p2 = temp;
}