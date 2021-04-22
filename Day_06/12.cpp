/*多级指针*/
# include <stdio.h>

int main(void)
{
	int i = 5;
	int * p = &i;  //p用于保存变量i的地址
	int ** q = &p;  //q用于保存指针变量p的地址
	int *** r = &q;  //r用于保存变量q的地址

	r = &p;  //error，因为变量r的类型是int ***，不能存放变量p的地址

	printf("i = %d", ***r);  //***r表示的即为变量i的值

	return 0;
}