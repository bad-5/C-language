/*ö��*/
# include <stdio.h>

//����һ����������Ϊenum WeekDay��û�ж������
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
��Visual C++6.0�е����н��
-----------------------
0 5
Press any key to continue
-----------------------
 */