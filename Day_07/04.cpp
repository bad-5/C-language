/*通过函数完成对结构体变量的输入和输出*/
# include <stdio.h>
# include <string.h>  //使用strcpy需要定义头文件

struct Student
{
	int age;
	char sex;
	char name[50];
};

void InputStudent(struct Student *);  //函数声明，需要指定形参的数据类型
void OutputStudent(struct Student);

int main(void)
{
	struct Student st;

	InputStudent(&st);  //对结构体变量输入，将变量st的地址发送给函数
	printf("%d %c %s\n", st.age, st.sex, st.name);
	OutputStudent(st);  //对结构体变量输出，将变量st的值发送给函数

	return 0;
}

void InputStudent(struct Student * pstu)
{
	(*pstu).age = 20;  //指针变量pstu用于存放st的地址，则*pstu即st的值
	strcpy(pstu->name, "Bad");
	pstu->sex = 'M';
}

void OutputStudent(struct Student stu)
{
	printf("%d %c %s\n", stu.age, stu.sex, stu.name);
}

/*
在Visual C++6.0中的运行结果
-----------------------
20 M Bad
20 M Bad
Press any key to continue
-----------------------
 */