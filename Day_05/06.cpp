/*����a-f��6��������ÿ����������һ��ֵ��Ҫ��Ƚ�a��b��c��d��e��f֮��Ĵ�С����������ϴ����*/
# include <stdio.h>

int max(int i, int j)  //���庯��
{
    if (i > j)
        return i;  //��i���ظ���������
    else
        return j;
}

int main(void)
{
    int a, b, c, d, e, f;
    a = 1, b = 2, c = 4, d = -3, e = 5, f = 10;
   
    printf("max = %d\n", max(a, b));  //��������i���
    printf("max = %d\n", max(c, d));
    printf("max = %d\n", max(e, f));

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