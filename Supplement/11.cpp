/*do while循环*/
# include <stdio.h>

int main(void)
{
	int n = 0, p;

	do
	{
		scanf("%d", &p);
		n++;
	}while(p != 1234 && n < 3);

	printf("p = %d, n = %d\n", p, n);

	return 0;
}

/*
在Visual C++6.0中的运行结果
-----------------------
123
12
123
p = 123, n = 3
Press any key to continue
-----------------------
 */