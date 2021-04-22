/*break用于多个switch选择*/
# include <stdio.h>

int main(void)
{
	int x = 1, y = 0, z = 0;

	switch (x)
	{
		case 1:
			switch (y)
			{
				case 0:
					z++;
					break;
				default:
					z--;
					break;
			}
			z = 5;
			break;
		default:
			z = 3;
	}

	printf("z = %d\n", z);

	return 0;
}