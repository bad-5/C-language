/*��1-100֮�������ܱ�3����������֮��*/
# include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;

	for (i = 3; i <= 100; ++i)
	{
		if (i % 3 == 0)
		{
			sum = sum + i;
		}
	}

	printf("sum = %d\n", sum);

	return 0;
}
/*
��Visual C++6.0�е����н��
-----------------------
sum = 1683
Press any key to continue
-----------------------
 */