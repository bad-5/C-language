# include <stdio.h>

int main(void)
{
    int a = 1, b = 2, c = 3, d = 4;
    
    printf("%d\n", (a < b ? a : c < d ? a : d));

    return 0;
}

/*
在Visual C++6.0中的运行结果
-----------------------
1
Press any key to continue
-----------------------
 */