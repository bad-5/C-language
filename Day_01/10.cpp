# include <stdio.h>

int main(void)
{
	char ch = 'A';  //�������A
//	char ch = "AB";  //error����Ϊ"AB"���ַ��������ܰ��ַ������������ַ�
//	char ch = "A";  //error����Ϊ"A"����ʾ'A'��'\0'(������)

//	char ch = 'B';  //error����Ϊch�Ѿ���������
    
    ch = 'C';  //
    
    printf("%c\n",ch);
    
	return 0;
}