/*�ж�һ�����Ƿ�������*/
# include <stdio.h>

bool IsPrime(int val)  //bool�������ݷ�������
{
    int i;
    for (i = 2; i < val; ++i)
    {
        if (val % i == 0)
            break;
    }

    if (i == val)
        return true;  //return����ֹ����
    else
        return false;
}

int main(void)
{
    int m;

    printf("��������Ҫ�жϵ�����");
    scanf("%d", &m);

    if (IsPrime(m))  //�жϱ�����������ֵ�Ƿ�Ϊ��
        printf("%d��������\n", m);
    else
        printf("%d����������\n", m);

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