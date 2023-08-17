#include <stdio.h>

// 输入一个华氏温度，要求输出摄氏温度。公式为：c = 5/9(F-32)，取小数点后2位
void main()
{
    printf("请输入华氏温度：");
    double w, h;
    scanf("%lf", &w);
    h = 5.0 / 9.0 * (w - 32);
    printf("华氏温度%.0lf转换摄氏温度为%.2lf", w, h);
}