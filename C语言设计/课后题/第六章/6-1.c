#include <stdio.h>
#include <string.h>

/**
 * (10��̫����ʱ����2��)
 * 1.һ������10��ѧ���ĳɼ���Ҫ��������10��ѧ���ĳɼ���Ȼ��������ǵ�ƽ��ֵ.
 * 2. ������Ļ��������ƽ���ɼ���ߵĿγ�(�Կγ���ű�ʾ)����ɼ�.
 * 4. ��2��ѧ����3�ſΣ�Ҫ������ȫ��ѧ�����ſγɼ������ֱ����ÿ�ſε�ƽ���ɼ���
 * 5. ��֪2��ѧ��3�ſεĳɼ���Ҫ�����ÿ��ѧ����ƽ���ɼ���Ȼ���ƽ���ɼ��ɸߵ��ͽ�������
 */

void main()
{
    // 2��ѧ��������(����Ӣ)�ɼ�
    double score[2][3], sum;
    // ѧ�����Ƴɼ�
    double scoreBySubject[3] = {0, 0, 0};
    // ÿ��ѧ���ĳɼ�
    double scoreByStudent[3] = {0, 0, 0};
    // ÿ��ѧ����ƽ���ɼ�
    double scoreByStudentAverage[3] = {0, 0, 0};
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
            // printf("����Ϊ%d=%lf, %lf\n", j, scoreByStudent[j], score[i][j]);
            scoreBySubject[j] += score[i][j];
            scoreByStudent[i] += score[i][j];
            // printf("%lf\n", scoreByStudent[i]);
        }
    }
    // �ɼ���ߵĳ˿ͼ���ɼ�
    int scoreIndex = 0;
    double maxScore = scoreBySubject[0];
    for (int i = 0; i < 3; i++)
    {
        // ������
        // printf("���Ϊ%d�Ŀε�ƽ���ɼ�Ϊ:%.2lf\n", i, scoreBySubject[i] / 3);
        // scoreByStudentAverage[i] = scoreByStudent[i] / 3.0;
        if (i >= 0 && maxScore < scoreBySubject[i])
        {
            maxScore = scoreBySubject[i];
            scoreIndex = i;
        }
    }
    for (int i = 0; i < 2; i++)
    {
        scoreByStudentAverage[i] = scoreByStudent[i] / 3.0;
        // printf("%.2lf,", scoreByStudentAverage[i]);
    }
    for (int i = 0; i < 1; i++)
    {
        for (int j = i; j < 1 - i; j++)
        {
            printf("%.2lf,%.2lf", scoreByStudentAverage[j], scoreByStudentAverage[j + 1]);
            if (scoreByStudentAverage[j] < scoreByStudentAverage[j + 1])
            {
                double rep = scoreByStudentAverage[j];
                scoreByStudentAverage[j] = scoreByStudentAverage[j + 1];
                scoreByStudentAverage[j + 1] = rep;
            }
        }
    }
    printf("ƽ���ɼ��ɴ�С����Ϊ:");
    for (int i = 0; i < 2; i++)
    {
        printf("%.2lf\n", scoreByStudentAverage[i]);
    }
    // printf("��10��ѧ�����ܳɼ�Ϊ%.2lf\n", sum);
    // printf("��10��ѧ����ƽ���ɼ�Ϊ%.2lf\n", sum / 2);
    // printf("��10��ѧ��ƽ���ɼ���õĿγ����Ϊ%d\n", scoreIndex);
    // printf("��10��ѧ��ƽ���ɼ���õĿγ̳ɼ�Ϊ%.2lf\n", maxScore);
}