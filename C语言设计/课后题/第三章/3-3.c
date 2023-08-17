#include <stdio.h>

// 用下满的scanf函数输入数据，使a=3,b=7,x=8.5,y=71.82,c1 = 'A', c2='a'
int main()
{
    int a, b;
    float x, y;
    char c1, c2;
    scanf("a=%d b=%d", &a, &b);
    scanf(" %f %e", &x, &y);
    scanf(" %c %c", &c1, &c2);
    printf("a=%d,b=%d,x=%.1f,y=%.2f,c1=%c,c2=%c", a, b, x, y, c1, c2);
    return 0;
}