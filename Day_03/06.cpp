/*����1+1/2+1/3+...+1/100�ĺ�*/
# include <stdio.h>

int main(void)
{
	int i;
	float sum = 0;  //��Ϊ����С�������в�����int

	for (i = 1; i <= 100; ++i)
	{
		sum = sum + 1 / (float)(i);  //ǿ����������ת��
		//sum = sum + 1.0 / i;  //��1��Ϊ������
	}

	printf("sum = %f\n", sum);  //float������������Ҫʹ��%f�����

	return 0;
}

/*
��Visual C++6.0�е����н��
-----------------------
sum = 5.187378
Press any key to continue
-----------------------
 */