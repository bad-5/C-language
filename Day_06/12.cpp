/*�༶ָ��*/
# include <stdio.h>

int main(void)
{
	int i = 5;
	int * p = &i;  //p���ڱ������i�ĵ�ַ
	int ** q = &p;  //q���ڱ���ָ�����p�ĵ�ַ
	int *** r = &q;  //r���ڱ������q�ĵ�ַ

	r = &p;  //error����Ϊ����r��������int ***�����ܴ�ű���p�ĵ�ַ

	printf("i = %d", ***r);  //***r��ʾ�ļ�Ϊ����i��ֵ

	return 0;
}