#include <stdio.h>
#include <math.h>
#define PI 3.14

// 设圆半径r=1.5，圆柱高h=3，求圆周长，圆面积，圆球表面积，圆球体积，圆柱体积。
// 用scanf输入数据，输出计算结果，输出时要求有文字说明，取小数点后两位数字
void main()
{
    double r;
    double h;

    printf("请输入圆的半径和圆柱的高");
    scanf("r=%lf,h=%lf", &r, &h);
    // 圆周长
    double zc = 2 * PI * r;
    // 圆面积
    double mj = PI * r * r;
    // 圆表面积
    double bmj = 4 * PI * r * r;
    // 圆球体积
    double yqtj = (4.0 / 3.0) * PI * r * r * r;
    // 圆柱体积
    double yztj = mj * h;
    printf("圆的周长为%.2lf\n", zc);
    printf("圆的面积为%.2lf\n", mj);
    printf("圆的表面积为%.2lf\n", bmj);
    printf("圆球体积为%.2lf\n", yqtj);
    printf("圆柱体积为%.2lf\n", yztj);
}