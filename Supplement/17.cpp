/*������������*/
# include <stdio.h>

int main(void)

{
	int a = 3, b = 5;
	{
		int a = 5;
		b += a;
	}

	b *= a;
	printf("b = %d\n", b);
	
    return 0;
}

/*
��Visual C++6.0�е����н��
-----------------------
b = 30
Press any key to continue
-----------------------
 */