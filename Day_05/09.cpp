/*函数声明*/
# include <stdio.h>

void f(void);  //函数声明

int main(void)
{
    f();

    return 0;
}

void f(void)
{
    printf("Bad Boy!\n"); 
}
/*
在Visual C++6.0中的运行结果
-----------------------
Bad Boy!
Press any key to continue
-----------------------
 */