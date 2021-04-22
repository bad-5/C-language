/*枚举*/
# include <stdio.h>

//定义一个数据类型为enum WeekDay，没有定义变量
enum WeekDay
{
	Monday, Tuesday, Wednesday, Thursday, Friday = 5, Saturday, Sunday
};

int main(void)
{
	enum WeekDay day1 = Monday;
	enum WeekDay day2 = Friday;
	printf("%d %d\n", day1, day2);

	return 0;
}
/*
在Visual C++6.0中的运行结果
-----------------------
0 5
Press any key to continue
-----------------------
 */