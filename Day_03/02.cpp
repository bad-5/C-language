/*计算1-10中的奇数和*/
# include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;

	for (i = 1; i < 10; i += 2)  //i+=2等价于i=i+2
	{
		sum = sum + i;
		printf("Bad boy！\n");  //输出5次，表示循环执行了5次
	}

	printf("sum = %d\n", sum);
	printf("i = %d\n", i);  //输出的i的值为11

	return 0;
}
/*
在Visual C++6.0中的运行结果
-----------------------
Bad boy！
Bad boy！
Bad boy！
Bad boy！
Bad boy！
sum = 25
i = 11
Press any key to continue
-----------------------
 */