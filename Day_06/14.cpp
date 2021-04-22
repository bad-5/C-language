/*动态内存可以跨函数使用*/
# include <stdio.h>
# include <malloc.h>

void f(int ** q)
{
	*q = (int *)malloc(sizeof(int));  //sizeof返回该类型所占字节数
	//q = 5;  //error，因为q存放的是指针变量p的地址
	//*q = 5;  //error，因为*q表示指针变量p存放的垃圾数据的地址
	**q = 5;  //正确，表示指针变量p存放的地址对应的值

}

int main(void)
{
	int * p;

	f(&p);
	printf("%d\n", *p);

	return 0;
}