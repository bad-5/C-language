/*
(�����ö� ��֧if����switch���ʵ��)
��ĳ�̳�����ʱ�����˿����ѵ�һ���ķ���ʱ������Դ��ۡ�
����������s����۵Ĺ�ϵ����:
	s��100Ԫʱ����95��;
	s��300Ԫʱ����90��;
	s��500Ԫʱ����80��;
	s��1000Ԫʱ����75��;
	s��3000Ԫʱ����70��;
��дһ����������˿͵����Ѷ����ʵ��Ӧ֧���ķ��á�
 */
# include <stdio.h>

int main(void)
{
	int a;
	double s, j;

	printf("���������ѽ��(��λ:Ԫ):");
	scanf("%lf", &s);

	a = (int)(s / 100);  //aΪ���Σ�sΪ˫�����ͣ���Ҫ����ǿ��ת��

	switch(a)
	{
		case 0:
			j = s;
			printf("�����ۣ��۸�Ϊ��%.3lfԪ\n", j);  //%.3lf��ʾ���������λС��
			break;
		case 1:
		case 2:  //��ʾƥ�䵽case1��case2��ִ����ͬ�����
			j = s * 0.95;
			printf("������ۺ�ļ۸�Ϊ��%.3lfԪ\n", j);
			break;
		case 3:
		case 4:
			j = s * 0.9;
			printf("����ۺ�ļ۸�Ϊ��%.3lfԪ\n", j);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			j = s * 0.8;
			printf("����ۺ�ļ۸�Ϊ��%.3lfԪ\n", j);
			break;
		default:
			if (a >= 10 && a < 30)
			{
				j = s * 0.75;
				printf("�������ۺ�ļ۸�Ϊ��%.3lfԪ\n", j);
			}
			else
			{
				j = s * 0.7;
				printf("�����ۺ�ļ۸�Ϊ��%.3lfԪ\n", j);
			}
			break;
	}

	return 0;
}