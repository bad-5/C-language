/*一维数组名与数组的第一个元素*/
# include <stdio.h>

int main(void)
{
	int a[5];

	printf("%#X\n", &a[0]);
	printf("%#X\n", a);

	return 0;
}

/*
在Visual C++6.0中的运行结果
-----------------------
0X19FF1C
0X19FF1C
Press any key to continue
-----------------------
 */