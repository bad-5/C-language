/*scanf("非输入控制符 输入控制符",输入参数);*/
# include <stdio.h>

int main(void)
{
    int i;
    
    scanf("m%d",&i);
    /*
        输入的第一个参数必须是m才认为是合法输入
        第一个参数不是m，输出会填充垃圾数据
    */
    printf("i = %d\n",i);

    return 0;
}