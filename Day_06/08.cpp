/*ȷ��һά������Ҫ�Ĳ���*/
# include <stdio.h>

void f(int * p, int len)
{
	p[3] = 5;
}

int main(void)
{
	int a[5] = {1, 2, 3, 4, 5};

	printf("%d\n", a[3]);
	f(a, 5);
	printf("%d\n", a[3]);

	return 0;
}
/*
��Visual C++6.0�е����н��
-----------------------
4
5
Press any key to continue
-----------------------
 */