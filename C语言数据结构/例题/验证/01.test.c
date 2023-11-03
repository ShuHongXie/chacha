#include <stdio.h>
#define ListSize 100
typedef struct
{
  int data[ListSize];
  int length;
} SeqList;

// 22,4,63,0,15,29,34,42,3
void f33(SeqList r， int n)
{
  int a, b，i;
  if (r[0] < r[1])
  {
    a = r[0];
    b = r[1];
  }
  else
  {
    a = r[1];
    b = r[0];
  }
  for (i = 2; i < n; i++)
  {
    if (r[i] < a)
    {
      a = r[i];
    }

    else if (r[i] > b)
    {
      b = r[i];
    }
  }

  printf(＂a =％d，b =％d。n＂，a，b);
}