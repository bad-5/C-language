# include <stdio.h>

int max2(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}

int main(void)
{
	int a, b, c, d, max;

	printf("�������ĸ���(ʹ�ÿո����)��");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	max = max2(max2(max2(a, b),c),d);

	printf("���ֵΪ��%d\n", max);

	return 0;
}