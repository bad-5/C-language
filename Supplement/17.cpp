/*变量的作用域*/
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
在Visual C++6.0中的运行结果
-----------------------
b = 30
Press any key to continue
-----------------------
 */