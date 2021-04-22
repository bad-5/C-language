# include <stdio.h>

int main(void)
{
	int x = 0, y = 1;
	
	switch (x)
	{
	case 0:
		switch (y)
		{
		case 1:
			printf("1\n");
			break;
		case 2:
			printf("2\n");
			break;
		}
	case 1:
		printf("3\n");
		break;
	}

	return 0;
}