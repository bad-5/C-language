# include <stdio.h>
# include <math.h>  //ʹ��sqrt���������� math.h �ļ���

int main(void)
{
	//������ϵ�����浽�������
	int a = 1;  //��a��ֵΪ1
	int b = 5;
	int c = 6;
	double delta;  //delta���ڴ��b*b-4*a*c
	double x1;  //���ڴ��һԪ���η��̵Ľ�
	double x2;

	delta = b * b - 4 * a * c;

	if (delta > 0)
	{
		x1 = (-b + sqrt(delta)) / (2 * a);  //���һԪ���η��̵Ľ�,sqrt������ƽ����
		x2 = (-b - sqrt(delta)) / (2 * a);
		printf("��һԪ���η�����������:\n�ֱ��� x1 = %f, x2 = %f \n", x1, x2);  //������
	}
	else if (delta == 0)
	{
		x1 = -b / (2 * a);
		x2 = x1;  //�ѵȺ��ұߵ�ֵ�����ұ�
		printf("��һԪ���η�����һ��Ψһ�⣺x1 = x2 = %f \n", x1, x2);
	}
	else
	{
		printf("��һԪ���η����޽⣡\n");
	}
	return 0;
}