/*
 	用递归计算斐波拉契序列的第n项值
	1 2 3 5 8 13 21
 */
# include <stdio.h>

int main(void)
{
	int n, i;
	int f3;  //用于存放第n项的值
	int f2 = 2;  //存放第2项的值
	int f1 = 1;  //存放第1项的值

	printf("请输入您需要输出的项：\n");
	scanf("%d", &n);

	if (1 == n)
	{
		f3 = 1;
	}
	else if (2 == n)
	{
		f3 = 2;
	}
	else
		for (i = 3; i <= n; ++i)
		{
			f3 = f1 + f2;
			f1 = f2;
			f2 = f3;
		}

	printf("第 %d 项的值是：%d\n", n, f3);

	return 0;
}

/*
在Visual C++6.0中的运行结果
-----------------------
请输入您需要输出的项：
5
第 5 项的值是：8
Press any key to continue
-----------------------
 */