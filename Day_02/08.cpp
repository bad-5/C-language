/*定义两个变量分别对应两个数，要求互换这两个变量对应的数值*/
# include <stdio.h>

int main(void)
{
    int i = 3;
    int j = 5;
    int t;  //定义临时变量
    
    t = i;
    i = j;
    j = t;
    
    printf("i = %d, j = %d\n", i, j);
    
    return 0;
}