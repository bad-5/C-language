/*break不能直接用于if语句*/
# include <stdio.h>

int main(void)
{
	int i;

	for (i = 0; i < 3; ++i)
	{
		if (3 > 2)
			break;  //break虽然属于if语句，但是终止的是for循环
		printf("Bad boy!\n");  //不会被输出
	}

	printf("嘿嘿嘿！\n");

	return 0;
}