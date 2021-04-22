/*static�÷�*/
# include <stdio.h>

int func(int a, int b);

int main(void)
{
	int k = 4,m = 1, p;

	p = func(k, m);    //8
	printf("p1 = %d\n", p); 

	p = func(k, m);
	printf("p2 = %d\n", p);

	p = func(k, m);
	printf("p3 = %d\n", p);

	return 0;
}

int func(int a, int b )
{
	static int m = 0, i = 2;
	/*
		staticֻ���ڵ�һ��ִ�е�ʱ���ʼ������
		���������󣬱������ᱻ�ͷ�
		��һ�α�����ʱ���������ᱻ���¸�ֵ������ʹ��֮ǰ��ֵ
	 */
	printf("m = %d\t", m);
	printf("i = %d\n", i);
	i += m + 1;        //2+0+1=3   3+8+1=12   12+17+1=30
	m = i + a + b;     //3+4+1=8   12+4+1=17  30+4+1=35

	return (m);
}
/*
��Visual C++6.0�е����н��
-----------------------
m = 0, i = 2
p1 = 8
m = 8, i = 3
p2 = 17
m = 17, i = 12
p3 = 35
Press any key to continue
-----------------------
 */