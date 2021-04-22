/*冒泡排序*/
# include <stdio.h>

void Sort(int * a, int len)
{
	int i, j, t;

	for (i = 0; i < len - 1; ++i)
	{
		for (j = 0; j < len - 1 - i; ++j)
		{
			if (a[j] > a[j + 1])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
}

int main(void)
{
	int a[5] = {3, 5, 2, 0, -1};
	int i;

	Sort(a, 5);

	for (i = 0; i < 5; ++i)
		printf("%d ", a[i]);

	printf("\n");

	return 0;
}

/*
在Visual C++6.0中的运行结果
-----------------------
-1 0 2 3 5
Press any key to continue
-----------------------
 */
