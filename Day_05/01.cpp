/*����a-f��6��������ÿ����������һ��ֵ��Ҫ��Ƚ�a��b��c��d��e��f֮��Ĵ�С����������ϴ����*/
# include <stdio.h>

int main(void)
{
    int a, b, c, d, e, f;
    a = 1, b = 2, c = 4, d = -3, e = 5, f = 10;  //���ű��ʽ
    /*��Ϊ����û�и�������������û��Ӱ�죬Ҳ����ʹ�÷ֺŸ���
        a = 1;
        b = 2;
        ...
    */

    if (a > b)
        printf("max = %d\n", a);
    else
        printf("max = %d\n", b);

    if (c > d)
        printf("max = %d\n", c);
    else
        printf("max = %d\n", d);

    if (e > f)
        printf("max = %d\n", e);
    else
        printf("max = %d\n", f);

    return 0;
}

/*
��Visual C++6.0�е����н��
-----------------------
max = 2
max = 4
max = 10
Press any key to continue
-----------------------
 */