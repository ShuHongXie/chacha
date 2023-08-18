#include <stdio.h>

/*
给出一个百分制的成绩，要求输出成绩等级ABCDE,
90分以上为A，80-89为B，70-79为C，60-69为D，60以下为E
 */
void main()
{
    int score;
    char level;
    printf("请输入您的分数:");
    scanf("%d", &score);
    if (score >= 90)
    {
        level = 'A';
    }
    else if (score >= 80 && score <= 89)
    {
        level = 'B';
    }
    else if (score >= 70 && score <= 79)
    {
        level = 'C';
    }
    else if (score >= 60 && score <= 69)
    {
        level = 'D';
    }
    else if (score <= 60)
    {
        level = 'E';
    }
    printf("经计算，您的成绩等级为%c", level);
}