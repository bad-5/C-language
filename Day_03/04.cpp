/*针对“求1-12之间所有能被3整除的数字之和”可能出现的问题分析*/
# include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;

	for (i = 3; i <= 12; ++i)  //方便结果分析，计算1-12之间能被3整除的数字之和
	{
		if (i % 3 == 0)
			sum = sum + i;
		printf("sum = %d\n", sum);  //无论if语句是否成立，sum都会被输出
	}

	return 0;
}

/*
在Visual C++6.0中的运行结果
-----------------------
sum = 3
sum = 3
sum = 3
sum = 9
sum = 9
sum = 9
sum = 18
sum = 18
sum = 18
sum = 30
Press any key to continue
-----------------------
 */