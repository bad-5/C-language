/*for嵌套循环*/
# include <stdio.h>

int main(void)
{
	int i, j;

	for (i = 0; i < 3; ++i)  //循环3次
		for (j = 2; j < 5; ++j)  //循环输出3次
			printf("Bad!\n");
		printf("Boy!\n");  //不属于for循环的语句，只输出一次

	return 0;
}

/*
在Visual C++6.0中的运行结果
-----------------------
Bad!
Bad!
Bad!
Bad!
Bad!
Bad!
Bad!
Bad!
Bad!
Boy!
Press any key to continue
-----------------------
 */