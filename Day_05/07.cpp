/*�ж�һ�����Ƿ�������*/
# include <stdio.h>

int main(void)
{
    int val;
    int i;

    printf("��������Ҫ�жϵ�����");
    scanf("%d", &val);

    for (i = 2; i < val; ++i)
    {
        if (val % i == 0)
            break;  //��ֹforѭ��
    }
    
    if (i == val)
        printf("%d��������\n", val);
    else
        printf("%d����������\n", val);

    return 0;
}

/*
��Visual C++6.0�е����н��
-----------------------
��������Ҫ�жϵ�����13
13��������
---------------------
��������Ҫ�жϵ�����9
9����������
Press any key to continue
-----------------------
 */