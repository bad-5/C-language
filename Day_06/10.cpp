/*ָ�������ռ�ֽ���*/
# include <stdio.h>

int main(void)
{
	char ch = 'A';  //�ַ��������ݲ���ʡ��''
	int i = 5;
	double x = 3.3;
	char * p = &ch;
	int * q = &i;
	double * r = &x;

	printf("%d %d %d\n", sizeof(p), sizeof(q), sizeof(r));

	return 0;
}
/*
��Visual C++6.0�е����н��
-----------------------
4 4 4
Press any key to continue
-----------------------
 */