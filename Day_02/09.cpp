/*Ҫ���û����������������������Ӵ�С���������*/
# include <stdio.h>

int main(void)
{
    int x, y, z;
    int t;  //������ʱ����
    
    printf("��������������ʹ�ÿո��������");
    scanf("%d %d %d", &x, &y, &z);
    
    if (x < y)
    {
        t = y;
        y = x;
        x = t;
    }
    if (x < z)
    {
        t = z;
        z = x;
        x = t;
    }
    if (y < z)
    {
        t = z;
        z = y;
        y = t;
    }
    
    printf("�����������Ӵ�С��˳���ǣ�%d > %d > %d\n", x, y, z);

    return 0;
}