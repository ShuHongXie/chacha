#include <stdio.h>
#include <math.h>
#define PI 3.14

// ��Բ�뾶r=1.5��Բ����h=3����Բ�ܳ���Բ�����Բ��������Բ�������Բ�������
// ��scanf�������ݣ���������������ʱҪ��������˵����ȡС�������λ����
void main()
{
    double r;
    double h;

    printf("������Բ�İ뾶��Բ���ĸ�");
    scanf("r=%lf,h=%lf", &r, &h);
    // Բ�ܳ�
    double zc = 2 * PI * r;
    // Բ���
    double mj = PI * r * r;
    // Բ�����
    double bmj = 4 * PI * r * r;
    // Բ�����
    double yqtj = (4.0 / 3.0) * PI * r * r * r;
    // Բ�����
    double yztj = mj * h;
    printf("Բ���ܳ�Ϊ%.2lf\n", zc);
    printf("Բ�����Ϊ%.2lf\n", mj);
    printf("Բ�ı����Ϊ%.2lf\n", bmj);
    printf("Բ�����Ϊ%.2lf\n", yqtj);
    printf("Բ�����Ϊ%.2lf\n", yztj);
}