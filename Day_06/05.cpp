/*ʹ��ָ�룬����������*/
# include <stdio.h>

void Exchange_1(int , int);  //�������������Բ���д�β�
void Exchange_2(int *, int *);
void Exchange_3(int *, int *);

void Exchange(int * p, int * q)  //��ȷ���޸ĵ�*p��*q��ֵ�����޸�����������a��b��ֵ
{
	int t;  //�޸�*p��*q��ֵ����t��Ҫ����Ϊint����

	t = *p;
	*p = *q;  //*p�Ǳ���p�洢��ַ�ı���ֵ��������������a��ֵ
	*q = t;
}

int main(void)
{
	int a = 3;
	int b = 5;

	Exchange(&a, &b);  //���庯������int *���ͣ�����Ҫȡa��b�ĵ�ַ
	printf("a = %d, b = %d\n", a, b);

	return 0;
}

//����ʵ�ֻ���
void Exchange_1(int a, int b)  //�ı���Ƕ��庯���ڵ�a��b��ֵ����û�иı��������ڵ�ֵ
{
	int t;

	t = a;
	a = b;
	b = t;

	return;
}

//����ʵ�ֻ���
void Exchange_2(int * p, int * q)  //�ı���Ƕ��庯���ڵ�p��q��ֵ����û�иı��������ڵ�a��b��ֵ
{
	int * t;  //����p��q��ֵ����t��Ҫ����Ϊint *����

	t = p;
	p = q;
	q = t;

	return;
}
/*
��Visual C++6.0�е����н��
-----------------------
a = 5, b = 3
Press any key to continue
-----------------------
 */