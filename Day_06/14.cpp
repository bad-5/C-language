/*��̬�ڴ���Կ纯��ʹ��*/
# include <stdio.h>
# include <malloc.h>

void f(int ** q)
{
	*q = (int *)malloc(sizeof(int));  //sizeof���ظ�������ռ�ֽ���
	//q = 5;  //error����Ϊq��ŵ���ָ�����p�ĵ�ַ
	//*q = 5;  //error����Ϊ*q��ʾָ�����p��ŵ��������ݵĵ�ַ
	**q = 5;  //��ȷ����ʾָ�����p��ŵĵ�ַ��Ӧ��ֵ

}

int main(void)
{
	int * p;

	f(&p);
	printf("%d\n", *p);

	return 0;
}