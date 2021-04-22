/*if...else用法*/
# include <stdio.h>

int main(void)
{
    int i, j;
    
    printf("请输出两个数（使用空格隔开）：\n");
    scanf("%d %d", &i, &j);
    
    if (i > j)
        printf("i大于j\n");
    else
        printf("i小于j\n");

    return 0;
}