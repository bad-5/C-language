/*break*/
# include <stdio.h>

int main(void)
{
	int k = 5, n = 0;

	while (k > 0)
	{
		switch (k)
		{
			default:  //default��λ�ò���Ӱ��switch�����Ľ���
				break;
			case 1:
				n += k;
			case 2:
			case 3:
				n += k;
		}
		k--;
	}

	printf("n = %d\n", n);

	return 0;
}

/*
��Visual C++6.0�е����н��
-----------------------
n = 7
Press any key to continue
-----------------------
 */