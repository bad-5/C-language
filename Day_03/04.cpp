/*��ԡ���1-12֮�������ܱ�3����������֮�͡����ܳ��ֵ��������*/
# include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;

	for (i = 3; i <= 12; ++i)  //����������������1-12֮���ܱ�3����������֮��
	{
		if (i % 3 == 0)
			sum = sum + i;
		printf("sum = %d\n", sum);  //����if����Ƿ������sum���ᱻ���
	}

	return 0;
}

/*
��Visual C++6.0�е����н��
-----------------------
sum = 3
sum = 3
sum = 3
sum = 9
sum = 9
sum = 9
sum = 18
sum = 18
sum = 18
sum = 30
Press any key to continue
-----------------------
 */