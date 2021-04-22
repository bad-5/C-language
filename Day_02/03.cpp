/*if的简单用法*/
# include <stdio.h>

int main(void)
{
    if (5)
        printf("Hello!\n");  //if语句成立，输出
    if (0)
        printf("Bad!\n");  //if语句不成立，不输出
    if (0 == 0)
        printf("Boy!\n");  //if语句成立，输出

    return 0;
}