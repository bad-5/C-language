/*现有a-f共6个变量，每个变量都有一个值，要求比较a、b，c、d，e、f之间的大小，并且输出较大的数*/
# include <stdio.h>

int max(int i, int j)  //定义函数
{
    if (i > j)
        return i;  //将i返回给主调函数
    else
        return j;
}

int main(void)
{
    int a, b, c, d, e, f;
    a = 1, b = 2, c = 4, d = -3, e = 5, f = 10;
   
    printf("max = %d\n", max(a, b));  //主函数将i输出
    printf("max = %d\n", max(c, d));
    printf("max = %d\n", max(e, f));

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