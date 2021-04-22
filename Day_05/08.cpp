/*判断一个数是否是素数*/
# include <stdio.h>

bool IsPrime(int val)  //bool类型数据返回真或假
{
    int i;
    for (i = 2; i < val; ++i)
    {
        if (val % i == 0)
            break;
    }

    if (i == val)
        return true;  //return会终止函数
    else
        return false;
}

int main(void)
{
    int m;

    printf("请输入需要判断的数：");
    scanf("%d", &m);

    if (IsPrime(m))  //判断被调函数返回值是否为真
        printf("%d是素数！\n", m);
    else
        printf("%d不是素数！\n", m);

    return 0;
}

/*
在Visual C++6.0中的运行结果
-----------------------
请输入需要判断的数：13
13是素数！
---------------------
请输入需要判断的数：9
9不是素数！
Press any key to continue
-----------------------
*/