/*do...while计算一元二次方程：ax^2+bx+c=0*/
# include <stdio.h>
# include <math.h>  //使用到函数sqrt，所以需要引入函数库

int main(void)
{
	double a, b, c;  //用于存放一元二次方程的三个系数
	double delta;  //用于存放△的值
	double x1, x2;  //用于存放方程的解
	char ch;  //用于判断是否还要继续执行本程序

	do
	{
		printf("请输入一元二次方程的三个系数：\n");
		printf("a = ");
		scanf("%lf", &a);  //double类型数据使用%lf控制，float使用%f控制

		printf("b = ");
		scanf("%lf", &b);

		printf("c = ");
		scanf("%lf", &c);

		delta = b * b - 4 * a * c;  //计算△的值

		if (delta > 0)
		{
			x1 = (-b + sqrt(delta)) / (2 * a);  //sqrt求算数平方根
			x2 = (-b - sqrt(delta)) / (2 * a);
			printf("该一元二次方程有两个解，分别是：x1 = %lf, x2 = %lf\n", x1, x2);
		}
		else if (delta == 0)
		{
			x1 = x2 = (-b) / (2 * a);
			printf("该一元二次方程有唯一解，是：x1 = x2 = %lf\n", x1);
		}
		else
		{
			printf("该一元二次方程无解！\n");
		}

		printf("您还要继续输入吗？（Y/N）:");
		scanf(" %c", &ch);  //%c表示对输入的字符的控制，%c前面必须加一个空格，表示空白符

	}while ('y' == ch || 'Y' == ch);  //单个字符必须使用''括起来

	return 0;
}

/*
在Visual C++6.0中的运行结果
-----------------------
请输入一元二次方程的三个系数：
a = 1
b = 2
c = 3
该一元二次方程无解！
您还要继续输入吗？（Y/N）:y
请输入一元二次方程的三个系数：
a = 1
b = 2
c = 1
该一元二次方程有唯一解，是：x1 = x2 = -1.000000
您还要继续输入吗？（Y/N）:y
请输入一元二次方程的三个系数：
a = 1
b = 3
c = 2
该一元二次方程有两个解，分别是：x1 = -1.000000, x2 = -2.000000
您还要继续输入吗？（Y/N）:n
Press any key to continue
-----------------------
 */