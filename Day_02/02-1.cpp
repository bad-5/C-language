/*自增&自减*/
# include <stdio.h>

int main(void)
{
    int i, j, k, m;
    
    i = j = 5;
    k = i++;  //整体表达式是i自增前的值
    m = ++j;  //整体表达式是j自增后的值
    
    printf("i = %d, j = %d, k = %d, m = %d\n", i, j, k, m);

    return 0;
}

/*
在Visual C++6.0中的运行结果
-----------------------
i = 6, j = 6, k = 5, m = 6
Press any key to continue
-----------------------
 */