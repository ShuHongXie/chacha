#include <stdio.h>

/*
����һ���ٷ��Ƶĳɼ���Ҫ������ɼ��ȼ�ABCDE,
90������ΪA��80-89ΪB��70-79ΪC��60-69ΪD��60����ΪE
 */
void main()
{
    int score;
    char level;
    printf("���������ķ���:");
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
    printf("�����㣬���ĳɼ��ȼ�Ϊ%c", level);
}