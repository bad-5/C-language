/*break����ֱ������if���*/
# include <stdio.h>

int main(void)
{
	int i;

	for (i = 0; i < 3; ++i)
	{
		if (3 > 2)
			break;  //break��Ȼ����if��䣬������ֹ����forѭ��
		printf("Bad boy!\n");  //���ᱻ���
	}

	printf("�ٺٺ٣�\n");

	return 0;
}