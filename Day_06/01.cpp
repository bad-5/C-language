/*指针概述*/

# include <stdio.h>

int main(void)
{
	int * p;  //int *表示p变量存放的是int类型变量的地址，p是变量名
	int i = 3;

	p = i;  //error，p存放的是整形地址，i是整形数据
	p = 5;  //error，原因同上
	p = &i;  //正确，&i表示去变量i的地址

	return 0;
}