/*�û�����һ���������0�������֮�����������*/
# include <stdio.h>

int main(void)
{
    int i, j;
    int val;

    printf("������һ������");
    scanf("%d", &val);

    printf("�����У�");
    for (i = 2; i <= val; ++i)
    {
        for (j = 2; j < i; ++j)
        {
            if (0 == i % j)
                break;
        }
        if (i == j)
            printf("%d ", i);
    }

    printf("\n");

    return 0;
}

/*
��Visual C++6.0�е����н��
-----------------------
������һ������50
�����У�2 3 5 7 11 13 17 19 23 29 31 37 41 43 47
Press any key to continue
-----------------------
 */