#include <stdio.h>

// 用下面的scanf函数输入数据，使a=10,b=20,c1='A',c2='a',x=1.5,y=-3.75,z=67.8
void main()
{
    int a, b;
    char c1, c2;
    float x, y, z;
    // 10      20Aa1.5-3.75*f,67.8
    scanf("%5d%5d%c%c%f%f*f,%f", &a, &b, &c1, &c2, &x, &y, &z);
    printf("a=%d,b=%d,c1=%c,c2=%c,x=%f,y=%f,z=%f", a, b, c1, c2, x, y, z);
}