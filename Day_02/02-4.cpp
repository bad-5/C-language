/*switch�÷�*/
# include <stdio.h>

int main(void)
{
	int val;

	printf("��������Ҫ�����¥�㣨1-3����");
	scanf("%d", &val);

	switch (val)
	{
		case 1:
			printf("1�㵽�ˣ�\n");
			break;  //��ֹ�������䣬���ע�ͣ���ôcase1��case2����䶼�ᱻ���
		case 2:
			printf("2�㵽�ˣ�\n");
			break;
		case 3:
			printf("3�㵽�ˣ�\n");
			break;
		default:  //�������valֵ��1��2��3����ƥ�䣬��ִ�д�����µĹ������
			printf("��û����һ�㣡\n");
			break;
	}

	return 0;
}

/*
��Visual C++6.0�е����н��
-----------------------
��������Ҫ�����¥�㣨1-3����3
3�㵽�ˣ�
Press any key to continue
-----------------------
��������Ҫ�����¥�㣨1-3����5
��û����һ�㣡
Press any key to continue
-----------------------
 */