/*实数常量表示*/
# include <stdio.h>

int main(void)
{
    float a = 3.2;
    float b = 3.24e3;  //b的值为3240
    float c = 123.4e-2F;  //c的值为1.234
    /*默认是double类型的数据，赋值给float会导致精度丢失，使用F将数值作为float处理*/
    
    printf("a = %f\n",a);
    printf("b = %f\n",b);
    printf("c = %f\n",c);
    
    return 0;
}