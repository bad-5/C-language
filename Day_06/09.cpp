/*ָ�������*/
# include <stdio.h>

int main(void)
{
	int i = 1;
	int j = 2;
	int * p = &i;
	int * q = &j;
	int a[5];

	p = &a[1];
	q = &a[4];
	printf("q��p���%d���洢��Ԫ��\n", q-p);

	return 0;
}
/*
��Visual C++6.0�е����н��
-----------------------
q��p���3���洢��Ԫ��
Press any key to continue
-----------------------
 */