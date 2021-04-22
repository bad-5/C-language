/*进制转换*/
# include <stdio.h>

int main(void)
{
    int i = 88;
    
    printf("i = %x\n",i);  //%x表示以十六进制输出
    printf("i = %d\n",i);  //%d表示以十进制输出
    printf("i = %o\n",i);  //%o表示以八进制输出
    
    return 0;
}