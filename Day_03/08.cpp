/*��1+2+3+...+100�ĺͣ�Ҫ��ʹ��whileѭ����*/
# include <stdio.h>

int main(void)
{
	int sum = 0;
	int i = 1;

	while (i < 101)  //����������ʱ���˳�ѭ��
	{
		sum = sum + i;
		++i;
	}

	printf("sum = %d\n", sum);

	return 0;
}

/*
��Visual C++6.0�е����н��
-----------------------
sum = 5050
Press any key to continue
-----------------------
 */