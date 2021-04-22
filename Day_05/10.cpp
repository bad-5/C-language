/*形参和实参*/
# include <stdio.h>

void f(int i, int j)  //形参
{
    printf("%d %d\n", i, j);
}

int main(void)
{
    f(3, 5);  //实参

    return 0;
}