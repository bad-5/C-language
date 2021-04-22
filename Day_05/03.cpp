/*函数举例*/
# include <stdio.h>

int f(void)  //int表示函数返回值类型，void表示该函数不能接收数据
{
    return 5;  //向主调函数返回5
}

int main(void)
{
    int j = 10;

    j = f();
    printf("%d\n", j);

    return 0;
}