/*break用于多个for循环*/
# include <stdio.h>

int main(void)
{
	int i, j;

	for (i = 0; i < 3; ++i)
	{
		for (j = 0; j < 3; ++j)
		{
			break;  //break只能终止最近的循环
			printf("Bad!\n");  //不会被输出
		}
		printf("Boy!\n");  //会被输出3次
	}

	return 0;
}