/*指针变量所占字节数*/
# include <stdio.h>

int main(void)
{
	char ch = 'A';  //字符类型数据不能省略''
	int i = 5;
	double x = 3.3;
	char * p = &ch;
	int * q = &i;
	double * r = &x;

	printf("%d %d %d\n", sizeof(p), sizeof(q), sizeof(r));

	return 0;
}
/*
在Visual C++6.0中的运行结果
-----------------------
4 4 4
Press any key to continue
-----------------------
 */