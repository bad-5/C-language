/*计算1-100的和*/
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
在Visual C++6.0中的运行结果
-----------------------
sum = 5050
i = 101
Press any key to continue
-----------------------
 */