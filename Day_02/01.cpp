/*�߼������*/
# include <stdio.h>

int main(void)
{
    int j = 20;
    int m;
    
    m = (3 > 2) && (j = 15);  //3>2Ϊ�棬j=15ҲΪ�棬�����m��ֵΪ1
    printf("m = %d, j = %d\n", m, j);

    return 0;
}