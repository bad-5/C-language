/*����1-10�е�������*/
# include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;

	for (i = 1; i < 10; i += 2)  //i+=2�ȼ���i=i+2
	{
		sum = sum + i;
		printf("Bad boy��\n");  //���5�Σ���ʾѭ��ִ����5��
	}

	printf("sum = %d\n", sum);
	printf("i = %d\n", i);  //�����i��ֵΪ11

	return 0;
}
/*
��Visual C++6.0�е����н��
-----------------------
Bad boy��
Bad boy��
Bad boy��
Bad boy��
Bad boy��
sum = 25
i = 11
Press any key to continue
-----------------------
 */