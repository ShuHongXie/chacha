#include <stdio.h>
#include <string.h>

/**
 * (10��̫����ʱ����2��)
 * 1.һ������10��ѧ���ĳɼ���Ҫ��������10��ѧ���ĳɼ���Ȼ��������ǵ�ƽ��ֵ.
 * 2. ������Ļ��������ƽ���ɼ���ߵĿγ�(�Կγ���ű�ʾ)����ɼ�.
 */

void main()
{
    // 2��ѧ��������(����Ӣ)�ɼ�
    double score[2][3], sum;
    // ���Ƴɼ�
    double scoreBySubject[3] = {0, 0, 0};

    // ��ʼ
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%lf", &score[i][j]);
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum += score[i][j];
            printf("����Ϊ%d=%lf, %lf\n", j, scoreBySubject[j], score[i][j]);
            scoreBySubject[j] += score[i][j];
            printf("%lf\n", scoreBySubject[j]);
        }
    }
    // �ɼ���ߵĳ˿ͼ���ɼ�
    int scoreIndex = 0;
    double maxScore = scoreBySubject[0];
    for (int i = 1; i < 3; i++)
    {
        if (maxScore < scoreBySubject[i])
        {
            maxScore = scoreBySubject[i];
            scoreIndex = i;
        }
    }
    printf("��10��ѧ�����ܳɼ�Ϊ%.2lf\n", sum);
    printf("��10��ѧ����ƽ���ɼ�Ϊ%.2lf\n", sum / 2);
    printf("��10��ѧ��ƽ���ɼ���õĿγ����Ϊ%d\n", scoreIndex);
    printf("��10��ѧ��ƽ���ɼ���õĿγ̳ɼ�Ϊ%.2lf\n", maxScore);
}
