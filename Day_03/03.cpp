/*求1-100之间所有能被3整除的数字之和*/
# include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;

	for (i = 3; i <= 100; ++i)
	{
		if (i % 3 == 0)
		{
			sum = sum + i;
		}
	}

	printf("sum = %d\n", sum);

	return 0;
}
/*
在Visual C++6.0中的运行结果
-----------------------
sum = 1683
Press any key to continue
-----------------------
 */