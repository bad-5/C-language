/*�纯��ʹ���ڴ�*/
# include <stdio.h>

void f(int ** q)
{
	int i = 5;
	*q = &i;
}

int main(void)
{
	int * p;

	f(&p);
	printf("%d\n", *p);

	return 0;
}