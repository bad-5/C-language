/*定义函数，输出指定数之间的素数*/
# include <stdio.h>

bool IsPrime(int m)  //定义函数只判断数是否是素数
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

    printf("请输入一个数：");
    scanf("%d", &val);

    printf("素数有：");
    for (i = 2; i <= val; ++i)
    {
        if (IsPrime(i))
            printf("%d ", i);
    }

    printf("\n");

    return 0;
}