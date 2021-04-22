/*putchar()与getchar()语句*/
# include <stdio.h>

int main(void)
{
	int a;

	printf("请输入一个大写字母：");
	a = getchar();

	a = a + 32;

	putchar(a);
	putchar('\n');

	return 0;
}
/*
在Visual C++6.0中的运行结果
-----------------------
请输入一个大写字母：Q
q
Press any key to continue
-----------------------
 */