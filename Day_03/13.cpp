/*break���ڶ��forѭ��*/
# include <stdio.h>

int main(void)
{
	int i, j;

	for (i = 0; i < 3; ++i)
	{
		for (j = 0; j < 3; ++j)
		{
			break;  //breakֻ����ֹ�����ѭ��
			printf("Bad!\n");  //���ᱻ���
		}
		printf("Boy!\n");  //�ᱻ���3��
	}

	return 0;
}