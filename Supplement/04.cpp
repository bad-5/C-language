# include <stdio.h>

int main(void)
{
	int i;
	int a[3] = {1, 2, 3};
	int b[3] = {10, 11, 12};

	for (i = 0; i < 3; ++i)
	{
		printf("%2d ", a[i]);
	}

	printf("\n");

	for (i = 0; i < 3; ++i)
	{
		printf("%2d ", b[i]);
	}

	printf("\n");

	return 0;
}