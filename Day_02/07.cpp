/*Ҫ���û�������������������Ӧ�ĵȼ���*/
# include <stdio.h>

int main(void)
{
    int score;
    
    printf("���������ķ�����");
    scanf("%d", &score);
    
    if (score > 100)
        printf("�������Σ�\n");
    else if (score >= 90 && score <= 100)
        printf("���ĵȼ��ǣ����㣡\n");
    else if (score >= 80 && score <= 89)
        printf("���ĵȼ��ǣ��ã�\n");
    else if (score >= 70 && score <= 79)
        printf("���ĵȼ��ǣ�����\n");
    else if (score >= 60 && score <= 69)
        printf("���ĵȼ��ǣ�����\n");
    else if (score >= 0 && score <= 60)
        printf("���ĵȼ��ǣ�������\n");
    else
        printf("������ĳɼ���Ч��\n");
        
    return 0;
}