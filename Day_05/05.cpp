/*return和break的区别*/
# include <stdio.h>
void f(void)
{
    int i;

    for (i = 0; i < 5; ++i)
    {
        printf("Bad!\n");
        break;  //终止的是for循环
    }

    return;  //终止的是f函数
    printf("Boy!\n");  //不会输出
}

int main(void)
{
    f();

    return 0;
}

/*
在Visual C++6.0中的运行结果
-----------------------
Bad!
Press any key to continue
-----------------------
 */
