/*����1-100�ĺ�*/
# include <stdio.h>

int main(void)
{
    int i;
    int sum = 0;
    
    for (i = 1; i <= 100; ++i)
        sum = sum + i;
    
    printf("sum = %d\n", sum);
    printf("i = %d\n", i);

    return 0;
}
/*
��Visual C++6.0�е����н��
-----------------------
sum = 5050
i = 101
Press any key to continue
-----------------------
 */