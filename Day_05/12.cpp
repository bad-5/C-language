/*���庯�������ָ����֮�������*/
# include <stdio.h>

bool IsPrime(int m)  //���庯��ֻ�ж����Ƿ�������
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

int main(void)
{
    int i, val;

    printf("������һ������");
    scanf("%d", &val);

    printf("�����У�");
    for (i = 2; i <= val; ++i)
    {
        if (IsPrime(i))
            printf("%d ", i);
    }

    printf("\n");

    return 0;
}