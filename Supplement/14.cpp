/*循环嵌套*/
# include <stdio.h>

int main(void)
{
	int i, j, x = 0;

	for(i = 0; i < 2; i++)
	{
		x++;
		for(j = 0; j < 3; j++)
		{
			if(j % 2)
				continue;
			x++;
		}
		x++;
	}

	printf("x = %d\n", x);

	return 0;
}

/*
在Visual C++6.0中的运行结果
-----------------------
x = 8
Press any key to continue
-----------------------
 */