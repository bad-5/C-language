/*break & continue*/
# include <stdio.h>

int main(void)
{
	int a, b;

	for(a = 1, b = 1; a <= 100; a++)
	{
		if(b >= 10)
			break;  //��ֹforѭ��
		if(b % 3 == 1)
		{
			b += 3;
			continue;  //��������ѭ���������´�ѭ��
		}
	}

	printf("a = %d\n", a);

	return 0;
}

/*
��Visual C++6.0�е����н��
-----------------------
a = 4
Press any key to continue
-----------------------
 */