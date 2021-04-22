/*使用指针，互换两个数*/
# include <stdio.h>

void Exchange_1(int , int);  //函数声明，可以不用写形参
void Exchange_2(int *, int *);
void Exchange_3(int *, int *);

void Exchange(int * p, int * q)  //正确，修改的*p，*q的值，即修改了主函数内a，b的值
{
	int t;  //修改*p，*q的值，则t需要定义为int类型

	t = *p;
	*p = *q;  //*p是变量p存储地址的变量值，即主函数变量a的值
	*q = t;
}

int main(void)
{
	int a = 3;
	int b = 5;

	Exchange(&a, &b);  //定义函数中是int *类型，所以要取a，b的地址
	printf("a = %d, b = %d\n", a, b);

	return 0;
}

//不能实现互换
void Exchange_1(int a, int b)  //改变的是定义函数内的a，b的值，并没有改变主函数内的值
{
	int t;

	t = a;
	a = b;
	b = t;

	return;
}

//不能实现互换
void Exchange_2(int * p, int * q)  //改变的是定义函数内的p，q的值，并没有改变主函数内的a，b的值
{
	int * t;  //互换p，q的值，则t需要定义为int *类型

	t = p;
	p = q;
	q = t;

	return;
}
/*
在Visual C++6.0中的运行结果
-----------------------
a = 5, b = 3
Press any key to continue
-----------------------
 */