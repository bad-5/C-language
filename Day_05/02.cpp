/*����a-f��6��������ÿ����������һ��ֵ��Ҫ��Ƚ�a��b��c��d��e��f֮��Ĵ�С����������ϴ����*/
# include <stdio.h>

void max(int i, int j)  //���庯��
{
    if (i > j)
        printf("max = %d\n", i);
    else
        printf("max = %d\n", j);
}

int main(void)
{
    int a, b, c, d, e, f;
    a = 1, b = 2, c = 4, d = -3, e = 5, f = 10;
   
   max(a, b);
   max(c, d);
   max(e, f);

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
