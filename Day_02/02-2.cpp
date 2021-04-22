/*三目运算符*/
# include <stdio.h>

int main(void)
{
    int i;
    
    i = (3 > 2 ? 5 : 1);  //3>2成立则输出5，否则输出1

    printf("i = %d\n", i);

    return 0;
}