/*函数返回值的类型*/
# include <stdio.h>

int f()
{
    return 3.5;  //因为函数的返回类型是int，所以最终返回的值为3
}

int main(void)
{
    double x = 5.5;

    x = f();  //调用函数，数值类型以函数名前的类型为准
    printf("%lf\n", x);

    return 0;
}

/*
在Visual C++6.0中的运行结果
-----------------------
3.000000
Press any key to continue
-----------------------
 */
