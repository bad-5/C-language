/*��������ֵ������*/
# include <stdio.h>

int f()
{
    return 3.5;  //��Ϊ�����ķ���������int���������շ��ص�ֵΪ3
}

int main(void)
{
    double x = 5.5;

    x = f();  //���ú�������ֵ�����Ժ�����ǰ������Ϊ׼
    printf("%lf\n", x);

    return 0;
}

/*
��Visual C++6.0�е����н��
-----------------------
3.000000
Press any key to continue
-----------------------
 */
