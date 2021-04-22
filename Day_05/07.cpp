/*判断一个数是否是素数*/
# include <stdio.h>

int main(void)
{
    int val;
    int i;

    printf("请输入需要判断的数：");
    scanf("%d", &val);

    for (i = 2; i < val; ++i)
    {
        if (val % i == 0)
            break;  //终止for循环
    }
    
    if (i == val)
        printf("%d是素数！\n", val);
    else
        printf("%d不是素数！\n", val);

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