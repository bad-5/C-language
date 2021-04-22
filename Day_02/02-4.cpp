/*switch用法*/
# include <stdio.h>

int main(void)
{
	int val;

	printf("请输入您要进入的楼层（1-3）：");
	scanf("%d", &val);

	switch (val)
	{
		case 1:
			printf("1层到了！\n");
			break;  //终止后面的语句，如果注释，那么case1和case2的语句都会被输出
		case 2:
			printf("2层到了！\n");
			break;
		case 3:
			printf("3层到了！\n");
			break;
		default:  //当输入的val值与1、2、3都不匹配，则执行此语句下的功能语句
			printf("还没有这一层！\n");
			break;
	}

	return 0;
}

/*
在Visual C++6.0中的运行结果
-----------------------
请输入您要进入的楼层（1-3）：3
3层到了！
Press any key to continue
-----------------------
请输入您要进入的楼层（1-3）：5
还没有这一层！
Press any key to continue
-----------------------
 */