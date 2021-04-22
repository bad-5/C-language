# include <stdio.h>
# include <math.h>  //使用sqrt函数包含在 math.h 文件中

int main(void)
{
	//将三个系数保存到计算机中
	int a = 1;  //给a赋值为1
	int b = 5;
	int c = 6;
	double delta;  //delta用于存放b*b-4*a*c
	double x1;  //用于存放一元二次方程的解
	double x2;

	delta = b * b - 4 * a * c;

	if (delta > 0)
	{
		x1 = (-b + sqrt(delta)) / (2 * a);  //求解一元二次方程的解,sqrt用于求平方根
		x2 = (-b - sqrt(delta)) / (2 * a);
		printf("该一元二次方程有两个解:\n分别是 x1 = %f, x2 = %f \n", x1, x2);  //输出结果
	}
	else if (delta == 0)
	{
		x1 = -b / (2 * a);
		x2 = x1;  //把等号右边的值赋给右边
		printf("该一元二次方程有一个唯一解：x1 = x2 = %f \n", x1, x2);
	}
	else
	{
		printf("该一元二次方程无解！\n");
	}
	return 0;
}