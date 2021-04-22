/*整型*/
# include <stdio.h>

int main(void)
{
    int i = 5;  //定义i为整形，赋值为5
    int a = 5.5; //int为整形，赋值为小数，输出只会输出整数部分
    
    printf("%d\n",i);  //输出i
    printf("%d\n",a);  //输出a
    
    return 0;
}