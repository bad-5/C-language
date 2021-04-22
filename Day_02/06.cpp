/*if...else...if...else用法*/
# include <stdio.h>

int main(void)
{
    double delta = 5;
    
    if (delta > 0)
        printf("方程有两个解！\n");
    else if (delta == 0)
        printf("方程有唯一解！\n");
    else
        printf("方程无解！\n");

    return 0;
}