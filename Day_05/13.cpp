/*���庯�������ָ����֮�������*/
# include <stdio.h>

bool IsPrime(int m)  //���庯��ֻ�ж����Ƿ������������򷵻�true�����򷵻�false
{
    int i;
    for (i = 2; i < m; ++i)
    {
        if (0 == m % i)
            break;
    }
    if (i == m)
        return true;
    else
        return false;
}

void TraverseVal(int n)  //���庯����1-n֮��������������
{
    int i;

    printf("�����У�");
    for (i = 2; i <= n; ++i)
    {
        if (IsPrime(i))
            printf("%d ", i);
    }
    printf("\n");
}

int main(void)
{
    int val;

    printf("������һ������");
    scanf("%d", &val);
    TraverseVal(val);  //���ú���

    return 0;
}
/*
��Visual C++6.0�е����н��
-----------------------
������һ������ 50
�����У�2 3 5 7 11 13 17 19 23 29 31 37 41 43 47
Press any key to continue
-----------------------
 */