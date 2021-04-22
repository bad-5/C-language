/*用户输入一个数，输出0到这个数之间的所有素数*/
# include <stdio.h>

int main(void)
{
    int i, j;
    int val;

    printf("请输入一个数：");
    scanf("%d", &val);

    printf("素数有：");
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
在Visual C++6.0中的运行结果
-----------------------
请输入一个数：50
素数有：2 3 5 7 11 13 17 19 23 29 31 37 41 43 47
Press any key to continue
-----------------------
 */