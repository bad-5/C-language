/*ָ�����&��ͨ����*/
# include <stdio.h>

int main(void)
{
	int * p;  //ָ�������int *��ʾ���Ǳ���p���������ͣ�p�Ǳ�����
	int i = 5;
	
	p = &i;  //ָ�����ָ����ͨ����
	printf("����i��ֵ�ǣ�%d\n", i);
	printf("����i��ŵĵ�ַ�ǣ�%d\n", &i);  //������Ǳ���i��ŵĵ�ַ
	printf("����p��ֵ�ǣ�%d\n", p);  //������Ǳ���p��ֵ
	printf("����p�ĵ�ַ�ǣ�%d\n", &p);  //�������p��ŵĵ�ַ
	printf("*p��ֵ�ǣ�%d\n", *p);  //*p�����滻��i

	i = 3;
	printf("����i��ֵ�ǣ�%d\n", i);
	printf("����p��ֵ�ǣ�%d\n", p);  //�޸ı���i��ֵ����Ӱ�����p��ֵ

	*p = 3;  //��ʾָ�����pָ���ֵ��3
	printf("*p��ֵ�ǣ�%d\n", *p);

	return 0;
}
/*
��Visual C++6.0�е����н��
-----------------------
����i��ֵ�ǣ�5
����i��ŵĵ�ַ�ǣ�1703720
����p��ֵ�ǣ�1703720
����p�ĵ�ַ�ǣ�1703724
*p��ֵ�ǣ�5
����i��ֵ�ǣ�3
����p��ֵ�ǣ�1703720
*p��ֵ�ǣ�3
Press any key to continue
-----------------------
 */