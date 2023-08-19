#include <stdio.h>
#include <string.h>

/**
 * (10个太多暂时换成2个)
 * 1.一个班有10个学生的成绩，要求输入这10个学生的成绩，然后求出他们的平均值.
 * 2. 在上题的基础上求出平均成绩最高的课程(以课程序号表示)及其成绩.
 */

void main()
{
    // 2个学生的三科(语数英)成绩
    double score[2][3], sum;
    // 各科成绩
    double scoreBySubject[3] = {0, 0, 0};

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
            printf("索引为%d=%lf, %lf\n", j, scoreBySubject[j], score[i][j]);
            scoreBySubject[j] += score[i][j];
            printf("%lf\n", scoreBySubject[j]);
        }
    }
    // 成绩最高的乘客及其成绩
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
    printf("这10个学生的总成绩为%.2lf\n", sum);
    printf("这10个学生的平均成绩为%.2lf\n", sum / 2);
    printf("这10个学生平均成绩最好的课程序号为%d\n", scoreIndex);
    printf("这10个学生平均成绩最好的课程成绩为%.2lf\n", maxScore);
}
