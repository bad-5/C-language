/*逗号表达式*/
# include <stdio.h>

int main(void)
{
    int i, j;
    
    i = (2, 3, 5, 6);  //表达式从左向右执行，最终i的值为6
    
    printf("i = %d\n", i);
    
    j = (i++, ++i, i+2, i-1);  //最终输出结果j的值为i++和++i后的值再减1

    printf("i = %d, j = %d\n", i, j);

    return 0;
}

/*
在Visual C++6.0中的运行结果
-----------------------
i = 6
i = 8, j = 7
Press any key to continue
-----------------------
 */