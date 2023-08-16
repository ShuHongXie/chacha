#include <stdio.h>
#include <math.h>

void main()
{
    // double赋值float
    // float f;
    // double d = 123.456789e100;
    // f = d;
    // printf("f=%f", f);

    // 字符，字符串的输入输出
    // char a, b, c;
    // a = getchar();
    // b = getchar();
    // c = getchar();
    // putchar(a);
    // putchar(b);
    // putchar(c);
    // putchar(getchar());
    // putchar(getchar());
    // putchar(getchar());

    // int a, b, c;
    // scanf("%d%d%d", &a, &b, &c);
    // printf("a=%d,b=%d,c=%d\n", a, b, c);

    // float f1 = 123.456213213123;
    // double d1 = 123.232131213213123;
    // printf("%f\n", d1);
    // printf("%lf", d1);

    // 三角形计算
    // double a, b, c, s, area;
    // scanf("%lf,%lf,%lf", &a, &b, &c);
    // s = (a + b + c) / 2.0;
    // area = sqrt(s * (s - a) * (s - b) * (s - c));
    // printf("a=%f\nb=%f\nc=%f\narea=%f\n", a, b, c, area);
    // printf("a   =%9.2f\nb   =%9.2f\nc   =%9.2f\narea=%9.2f\n", a, b, c, area);

    // 小写变大写
    printf("%c", getchar() + 32);
    printf("%c", getchar() + 32);
    printf("%c\n", getchar() + 32);
}