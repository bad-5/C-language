# include <stdio.h>

int main(void)
{
	char ch = 'A';  //正常输出A
//	char ch = "AB";  //error，因为"AB"是字符串，不能把字符串赋给单个字符
//	char ch = "A";  //error，因为"A"即表示'A'和'\0'(结束符)

//	char ch = 'B';  //error，因为ch已经被定义了
    
    ch = 'C';  //
    
    printf("%c\n",ch);
    
	return 0;
}