/*
 	�õݹ����쳲��������еĵ�n��ֵ
	1 2 3 5 8 13 21
 */
# include <stdio.h>

int main(void)
{
	int n, i;
	int f3;  //���ڴ�ŵ�n���ֵ
	int f2 = 2;  //��ŵ�2���ֵ
	int f1 = 1;  //��ŵ�1���ֵ

	printf("����������Ҫ������\n");
	scanf("%d", &n);

	if (1 == n)
	{
		f3 = 1;
	}
	else if (2 == n)
	{
		f3 = 2;
	}
	else
		for (i = 3; i <= n; ++i)
		{
			f3 = f1 + f2;
			f1 = f2;
			f2 = f3;
		}

	printf("�� %d ���ֵ�ǣ�%d\n", n, f3);

	return 0;
}

/*
��Visual C++6.0�е����н��
-----------------------
����������Ҫ������
5
�� 5 ���ֵ�ǣ�8
Press any key to continue
-----------------------
 */