/*��������*/
# include <stdio.h>

int f(void)  //int��ʾ��������ֵ���ͣ�void��ʾ�ú������ܽ�������
{
    return 5;  //��������������5
}

int main(void)
{
    int j = 10;

    j = f();
    printf("%d\n", j);

    return 0;
}