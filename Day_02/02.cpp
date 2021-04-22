/*逻辑运算符*/
# include <stdio.h>

int main(void)
{
    int i = 10;
    int j = 20;
    int m;
    int n;
    
    m = (1 > 2) && (i = 5);  //1>2为假，执行且运算，不执行i=5
    n = (1 > 2) || (j = 5);  //1>2为假，执行或运算，需要执行j=5
    printf("m = %d, i = %d\n", m, i);
    printf("n = %d, j = %d\n", n, j);

    return 0;
}

/*
在Visual C++6.0中的运行结果
-----------------------
m = 0, i = 10
n = 1, j = 5
Press any key to continue
-----------------------
 */