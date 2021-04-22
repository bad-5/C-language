/*确定一个一维数组需要几个参数*/
# include <stdio.h>

void f(int * p, int len)  //主函数中的a表示的是数组中第一个元素对应的地址，所以定义变量要使用int *类型
{
	int i;

	for (i = 0; i < len; ++i)
		printf("%d ", *(p + i));  //数组中的值存放的地址是连续的
	printf("\n");
}

int main(void)
{
	int a[5] = {-1, -2, 0, 4, 5};
	int b[6] = {1, 2, 3, 4, 5, 6};
	int c[10] = {1, 2, 3, 4};

	f(a, 5);
	f(b, 6);
	f(c, 10);

	return 0;
}

/*
在Visual C++6.0中的运行结果
-----------------------
-1 -2 0 4 5
1 2 3 4 5 6
1 2 3 4 0 0 0 0 0 0
Press any key to continue
-----------------------
 */