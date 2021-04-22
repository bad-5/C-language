/*break*/
# include <stdio.h>

int main(void)
{
	int k = 5, n = 0;

	while (k > 0)
	{
		switch (k)
		{
			default:  //default的位置不会影响switch语句从哪进入
				break;
			case 1:
				n += k;
			case 2:
			case 3:
				n += k;
		}
		k--;
	}

	printf("n = %d\n", n);

	return 0;
}

/*
在Visual C++6.0中的运行结果
-----------------------
n = 7
Press any key to continue
-----------------------
 */