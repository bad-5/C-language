/*�ṹ���г�Ա������ȡ��*/
# include <stdio.h>

struct Student
{
	int age;
	int score;
	char sex;
};   //�ֺŲ���ʡ��

int main(void)
{
	struct Student st = {20, 85, 'M'};
	struct Student * pst = &st;  //����ָ�����pstʱ��Žṹ���ַ��

	pst->age = 25;  //�ڼ�����ڲ��ᱻת��Ϊ(*st).age
	st.age = 25;

	printf("%d %d %c\n", st.age, pst->score, st.sex);

	return 0;
}

/*
��Visual C++6.0�е����н��
-----------------------
25 85 M
Press any key to continue
-----------------------
 */