/*
(可以用多 分支if语句或switch语句实现)
在某商场购物时，当顾客消费到一定的费用时，便可以打折。
假设消费量s与打折的关系如下:
	s≥100元时，打95折;
	s≥300元时，打90折;
	s≥500元时，打80折;
	s≥1000元时，打75折;
	s≥3000元时，打70折;
编写一个程序，输入顾客的消费额，计算实际应支付的费用。
 */
# include <stdio.h>

int main(void)
{
	int a;
	double s, j;

	printf("请输入消费金额(单位:元):");
	scanf("%lf", &s);

	a = (int)(s / 100);  //a为整形，s为双精度型，需要类型强制转换

	switch(a)
	{
		case 0:
			j = s;
			printf("不打折，价格为：%.3lf元\n", j);  //%.3lf表示输出保留三位小数
			break;
		case 1:
		case 2:  //表示匹配到case1、case2都执行相同的输出
			j = s * 0.95;
			printf("打九五折后的价格为：%.3lf元\n", j);
			break;
		case 3:
		case 4:
			j = s * 0.9;
			printf("打九折后的价格为：%.3lf元\n", j);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			j = s * 0.8;
			printf("打八折后的价格为：%.3lf元\n", j);
			break;
		default:
			if (a >= 10 && a < 30)
			{
				j = s * 0.75;
				printf("打七五折后的价格为：%.3lf元\n", j);
			}
			else
			{
				j = s * 0.7;
				printf("打七折后的价格为：%.3lf元\n", j);
			}
			break;
	}

	return 0;
}