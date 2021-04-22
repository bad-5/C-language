/*break & continue*/
# include <stdio.h>

int main(void)
{
	int a, b;

	for(a = 1, b = 1; a <= 100; a++)
	{
		if(b >= 10)
			break;  //终止for循环
		if(b % 3 == 1)
		{
			b += 3;
			continue;  //跳过本次循环，继续下次循环
		}
	}

	printf("a = %d\n", a);

	return 0;
}

/*
在Visual C++6.0中的运行结果
-----------------------
a = 4
Press any key to continue
-----------------------
 */