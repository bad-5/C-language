/*forǶ��ѭ��*/
# include <stdio.h>

int main(void)
{
	int i, j;

	for (i = 0; i < 3; ++i)  //ѭ��3��
		for (j = 2; j < 5; ++j)  //ѭ�����3��
			printf("Bad!\n");
		printf("Boy!\n");  //������forѭ������䣬ֻ���һ��

	return 0;
}

/*
��Visual C++6.0�е����н��
-----------------------
Bad!
Bad!
Bad!
Bad!
Bad!
Bad!
Bad!
Bad!
Bad!
Boy!
Press any key to continue
-----------------------
 */