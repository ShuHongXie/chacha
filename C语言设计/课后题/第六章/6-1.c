#include <stdio.h>
#include <string.h>

/**
 * (10个太多暂时换成2个)
 * 1.一个班有10个学生的成绩，要求输入这10个学生的成绩，然后求出他们的平均值.
 * 2. 在上题的基础上求出平均成绩最高的课程(以课程序号表示)及其成绩.
 * 4. 有2个学生上3门课，要求输入全部学生各门课成绩，并分别求出每门课的平均成绩。
 * 5. 已知2个学生3门课的成绩，要求求出每个学生的平均成绩，然后对平均成绩由高到低进行排序
 */

void main()
{
    // 2个学生的三科(语数英)成绩
    double score[2][3], sum;
    // 学生各科成绩
    double scoreBySubject[3] = {0, 0, 0};
    // 每个学生的成绩
    double scoreByStudent[3] = {0, 0, 0};
    // 每个学生的平均成绩
    double scoreByStudentAverage[3] = {0, 0, 0};
    // 开始
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
            // printf("索引为%d=%lf, %lf\n", j, scoreByStudent[j], score[i][j]);
            scoreBySubject[j] += score[i][j];
            scoreByStudent[i] += score[i][j];
            // printf("%lf\n", scoreByStudent[i]);
        }
    }
    // 成绩最高的乘客及其成绩
    int scoreIndex = 0;
    double maxScore = scoreBySubject[0];
    for (int i = 0; i < 3; i++)
    {
        // 第四题
        // printf("序号为%d的课的平均成绩为:%.2lf\n", i, scoreBySubject[i] / 3);
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
    printf("平均成绩由大到小排列为:");
    for (int i = 0; i < 2; i++)
    {
        printf("%.2lf\n", scoreByStudentAverage[i]);
    }
    // printf("这10个学生的总成绩为%.2lf\n", sum);
    // printf("这10个学生的平均成绩为%.2lf\n", sum / 2);
    // printf("这10个学生平均成绩最好的课程序号为%d\n", scoreIndex);
    // printf("这10个学生平均成绩最好的课程成绩为%.2lf\n", maxScore);
}