/*要求用户输入分数，输出分数对应的等级。*/
# include <stdio.h>

int main(void)
{
    int score;
    
    printf("请输入您的分数：");
    scanf("%d", &score);
    
    if (score > 100)
        printf("你在做梦！\n");
    else if (score >= 90 && score <= 100)
        printf("您的等级是：优秀！\n");
    else if (score >= 80 && score <= 89)
        printf("您的等级是：好！\n");
    else if (score >= 70 && score <= 79)
        printf("您的等级是：良！\n");
    else if (score >= 60 && score <= 69)
        printf("您的等级是：及格！\n");
    else if (score >= 0 && score <= 60)
        printf("您的等级是：不及格！\n");
    else
        printf("您输入的成绩无效！\n");
        
    return 0;
}