/*计算1+1/2+1/3+...+1/100的和*/
# include <stdio.h>

int main(void)
{
	int i;
	float sum = 0;  //因为含有小数，所有不能用int

	for (i = 1; i <= 100; ++i)
	{
		sum = sum + 1 / (float)(i);  //强制数据类型转换
		//sum = sum + 1.0 / i;  //将1变为浮点型
	}

	printf("sum = %f\n", sum);  //float浮点型数据需要使用%f来输出

	return 0;
}

/*
在Visual C++6.0中的运行结果
-----------------------
sum = 5.187378
Press any key to continue
-----------------------
 */