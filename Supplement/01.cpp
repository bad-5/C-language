/*putchar()��getchar()���*/
# include <stdio.h>

int main(void)
{
	int a;

	printf("������һ����д��ĸ��");
	a = getchar();

	a = a + 32;

	putchar(a);
	putchar('\n');

	return 0;
}
/*
��Visual C++6.0�е����н��
-----------------------
������һ����д��ĸ��Q
q
Press any key to continue
-----------------------
 */