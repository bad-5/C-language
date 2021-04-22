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
在Visual C++6.0中的运行结果
-----------------------
x=0  y=5  z=3

z=3 > 0 成立  z=2
x=1 < 5 成立
y=4

z=2 > 0 成立  z=1
x=2 < 5 成立
y=3

z=1 > 0 成立  z=0
x=3 < 5 成立
y=2

z=0 > 0 不成立 z=-1 终止循环

z=-1, x=3, y=2
-----------------------
 */