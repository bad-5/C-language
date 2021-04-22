/*定义函数，输出指定数之间的素数*/
# include <stdio.h>

bool IsPrime(int m)  //定义函数只判断数是否是素数，是则返回true，否则返回false
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

void TraverseVal(int n)  //定义函数把1-n之间的所有素数输出
{
    int i;

    printf("素数有：");
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

    printf("请输入一个数：");
    scanf("%d", &val);
    TraverseVal(val);  //调用函数

    return 0;
}
/*
在Visual C++6.0中的运行结果
-----------------------
请输入一个数： 50
素数有：2 3 5 7 11 13 17 19 23 29 31 37 41 43 47
Press any key to continue
-----------------------
 */