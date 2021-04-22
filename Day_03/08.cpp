/*求1+2+3+...+100的和（要求使用while循环）*/
# include <stdio.h>

int main(void)
{
	int sum = 0;
	int i = 1;

	while (i < 101)  //条件不成立时，退出循环
	{
		sum = sum + i;
		++i;
	}

	printf("sum = %d\n", sum);

	return 0;
}

/*
在Visual C++6.0中的运行结果
-----------------------
sum = 5050
Press any key to continue
-----------------------
 */