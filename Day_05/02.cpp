/*现有a-f共6个变量，每个变量都有一个值，要求比较a、b，c、d，e、f之间的大小，并且输出较大的数*/
# include <stdio.h>

void max(int i, int j)  //定义函数
{
    if (i > j)
        printf("max = %d\n", i);
    else
        printf("max = %d\n", j);
}

int main(void)
{
    int a, b, c, d, e, f;
    a = 1, b = 2, c = 4, d = -3, e = 5, f = 10;
   
   max(a, b);
   max(c, d);
   max(e, f);

    return 0;
}

/*
在Visual C++6.0中的运行结果
-----------------------
max = 2
max = 4
max = 10
Press any key to continue
-----------------------
 */
