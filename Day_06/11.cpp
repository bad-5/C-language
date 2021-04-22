/*动态一维数组举例*/
# include <stdio.h>
# include <malloc.h>

int main(void)
{
	int len;
	int * p;
	int i;

	//动态构造一维数组
	printf("请输入您想存放的元素个数：");
	scanf("%d", &len);
	p = (int *)malloc(4 * len);  //一个int类型元素占用4字节

	//对动态一维数组进行赋值
	for (i = 0; i < len; ++i)
	{
		printf("请输入第%d个元素的值：", i+1);
		scanf("%d", &p[i]);
	}
	
	//对一维数组进行输出
	printf("一维数组的内容是：");
	for (i = 0; i < len; ++i)
		printf("%d, ", p[i]);
	printf("\n");

	free(p);  //释放动态分配的数组

	realloc(p,100);  //重新动态分配给变量p的地址空间是100字节

	return 0;
}

/*
在Visual C++6.0中的运行结果
-----------------------
请输入您想存放的元素个数：3
请输入第1个元素的值：1
请输入第2个元素的值：2
请输入第3个元素的值：3
一维数组的内容是：1, 2, 3,
Press any key to continue
-----------------------
 */