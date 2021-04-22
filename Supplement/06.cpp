# include <stdio.h>

int main(void)
{
	int x = 0, y = 5, z = 3;

	while (z-- > 0 && ++x < 5)
	{
		printf("%d, %d, %d\n", x, y, z);
		y = y-1;
	}

	printf("%d, %d, %d\n", x, y, z);

	return 0;
}
/*
��Visual C++6.0�е����н��
-----------------------
x=0  y=5  z=3

z=3 > 0 ����  z=2
x=1 < 5 ����
y=4

z=2 > 0 ����  z=1
x=2 < 5 ����
y=3

z=1 > 0 ����  z=0
x=3 < 5 ����
y=2

z=0 > 0 ������ z=-1 ��ֹѭ��

z=-1, x=3, y=2
-----------------------
 */