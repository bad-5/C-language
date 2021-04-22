/*指针的运算*/
# include <stdio.h>

int main(void)
{
	int i = 1;
	int j = 2;
	int * p = &i;
	int * q = &j;
	int a[5];

	p = &a[1];
	q = &a[4];
	printf("q与p相隔%d个存储单元！\n", q-p);

	return 0;
}
/*
在Visual C++6.0中的运行结果
-----------------------
q与p相隔3个存储单元！
Press any key to continue
-----------------------
 */