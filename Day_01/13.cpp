/*scanf("输入控制符",输入参数);*/
# include <stdio.h>

int main(void)
{
    int i;
    
    scanf("%d",&i);  //&i表示i的地址，&为取地址符
    printf("i = %d\n",i);

    return 0;
}