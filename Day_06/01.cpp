/*ָ�����*/

# include <stdio.h>

int main(void)
{
	int * p;  //int *��ʾp������ŵ���int���ͱ����ĵ�ַ��p�Ǳ�����
	int i = 3;

	p = i;  //error��p��ŵ������ε�ַ��i����������
	p = 5;  //error��ԭ��ͬ��
	p = &i;  //��ȷ��&i��ʾȥ����i�ĵ�ַ

	return 0;
}