/*结构体变量的赋值和初始化*/
# include <stdio.h>

struct Student
{
	int age;
	int score;
	char sex;
};

int main(void)
{
	struct Student st = {20, 85, 'M'};  //定义变量时赋值
	struct Student st2;  //定义完成后再赋值
	st2.age = 20;
	st2.score = 85;
	st2.sex = 'M';
	printf("%d %d %c\n", st2.age, st2.score, st2.sex);

	return 0;
}

/*
在Visual C++6.0中的运行结果
-----------------------
20 85 M
Press any key to continue
-----------------------
 */