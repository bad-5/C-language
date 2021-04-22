/*逻辑运算符*/
# include <stdio.h>

int main(void)
{
    int j = 20;
    int m;
    
    m = (3 > 2) && (j = 15);  //3>2为真，j=15也为真，则输出m的值为1
    printf("m = %d, j = %d\n", m, j);

    return 0;
}