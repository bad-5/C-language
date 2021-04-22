/*学生管理系统*/
# include <stdio.h>
# include <malloc.h>

/*定义结构体*/
struct Student
{
	char name[50];
	int age;
	float score;
};

int main(void)
{
	int len;  //用于存放学生的个数
	struct Student * p;
	int i, j;
	struct Student t;  //用于交换学生名次的中间变量

	/*动态构造一维数组*/
	printf("请输入需要录入学生的个数：");
	scanf("%d", &len);  //将输入数值赋值给变量len
	p = (struct Student *)malloc(len * sizeof(struct Student));
	/*
		动态构建一维数组
		数组存放的数据类型为结构体定义的类型
		动态分配的地址空间为学生个数 * 结构体所占的字节数
	 */

	/*输入学生信息*/
	for (i = 0; i < len; ++i)
	{
		printf("请输入%d个学生的信息：\n", i + 1);
		printf("Nmae: ");
		scanf("%s", p[i].name);  
		/*
			name是数组名，本身即为第一个元素的地址，则不需要再取地址
			%s表示从键盘接收的数据是char类型
			p存放的是结构体的地址，结构体中有三个基本变量，所以需要使用p[i].name来指定赋值给哪个变量
		 */

		printf("Age: ");
		scanf("%d", &p[i].age);

		printf("Score:");
		scanf("%f", &p[i].score);  //%f表示从键盘接收的数据是float类型
	}

	/*对学生的成绩进行排序-冒泡排序*/
	for (i = 0; i < len - 1; ++i)
	{
		for (j = 0; j < len - 1 - i; ++j)
		{
			if (p[j].score > p[j + 1].score)  //大于号是升序，小于号是降序
			{
				t = p[j];
				p[j] = p[j + 1];
				p[j + 1] = t;
			}
		}
	}

	printf("\n\n");
	/*输出学生信息*/
	for (i = 0; i < len; ++i)
	{
		printf("第%d名学生的信息如下：\n", i + 1);
		printf("Name: %s\n", p[i].name);
		printf("Age: %d\n", p[i].age);
		printf("Score: %f\n", p[i].score);
		printf("\n");
	}

	return 0;
}

/*
在Visual C++6.0中的运行结果
-----------------------
请输入需要录入学生的个数：3
请输入1个学生的信息：
Nmae: Bad
Age: 20
Score:100
请输入2个学生的信息：
Nmae: Boy
Age: 18
Score:75
请输入3个学生的信息：
Nmae: Five
Age: 15
Score:85


第1名学生的信息如下：
Name: Boy
Age: 18
Score: 75.000000

第2名学生的信息如下：
Name: Five
Age: 15
Score: 85.000000

第3名学生的信息如下：
Name: Bad
Age: 20
Score: 100.000000

Press any key to continue
-----------------------
 */