/*printf用法*/
# include <stdio.h>

int main(void)
{
    printf("输出字符串：\n");  //\n表示换行
    printf("Hello Bad boy!\n");
    printf("---------------\n");

    int i = 5;  //给i赋值为5，是将5的二进制代码赋值给i
    printf("输出控制符 输出参数：\n");
    printf("%d\n",i);  //%d表示十进制输出，将i代表的二进制代码转换为十进制输出
    printf("---------------\n");
    /*
        %x表示以小写的十六进制输出
        %X表示以大写的十六进制输出
        %o表示以八进制输出
    */

    int a = 3;
    int b = 5;
    printf("多个输出控制符和输出参数：\n");
    printf("a = %d, b = %d\n", a, b);  //正常输出
    //printf("%d\n", a, b);  //error,输出控制符和输出参数个数不匹配
    printf("---------------\n");
    
    int x = 47;
    
    printf("关于输出十六进制数：\n");
    printf("%x\n",x);  //输出2f
    printf("%X\n",x);  //输出2F
    printf("%#x\n",x);  //输出0x2f
    printf("%#X\n",x);  //输出0X2F，推荐使用
    
    return 0;
}