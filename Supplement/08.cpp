# include <stdio.h>

int main(void)
{
    int a = 5, b = 4, c = 3, d = 2;
    
    if (a > b > c)  //��ִ��a>b��Ϊ�棬����1���ٱȽ�1>c
    	printf("%d\n", d);
    else if ((c - 1 >= d) == 1)  //c-1���ڵ���d����������1
    	printf("%d\n", d + 1);
    else
    	printf("%d\n", d + 2);

    return 0;
}
/*
��Visual C++6.0�е����н��
-----------------------
3
Press any key to continue
-----------------------
 */