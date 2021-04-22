/*结构体中成员变量的取出*/
# include <stdio.h>

struct Student
{
	int age;
	int score;
	char sex;
};   //分号不能省略

int main(void)
{
	struct Student st = {20, 85, 'M'};
	struct Student * pst = &st;  //定义指针变量pst时存放结构体地址的

	pst->age = 25;  //在计算机内部会被转化为(*st).age
	st.age = 25;

	printf("%d %d %c\n", st.age, pst->score, st.sex);

	return 0;
}

/*
在Visual C++6.0中的运行结果
-----------------------
25 85 M
Press any key to continue
-----------------------
 */