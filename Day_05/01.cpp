/*现有a-f共6个变量，每个变量都有一个值，要求比较a、b，c、d，e、f之间的大小，并且输出较大的数*/
# include <stdio.h>

int main(void)
{
    int a, b, c, d, e, f;
    a = 1, b = 2, c = 4, d = -3, e = 5, f = 10;  //逗号表达式
    /*因为整体没有赋给变量，所以没有影响，也可以使用分号隔开
        a = 1;
        b = 2;
        ...
    */

    if (a > b)
        printf("max = %d\n", a);
    else
        printf("max = %d\n", b);

    if (c > d)
        printf("max = %d\n", c);
    else
        printf("max = %d\n", d);

    if (e > f)
        printf("max = %d\n", e);
    else
        printf("max = %d\n", f);

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