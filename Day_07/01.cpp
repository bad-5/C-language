/*�ṹ������ĸ�ֵ�ͳ�ʼ��*/
# include <stdio.h>

struct Student
{
	int age;
	int score;
	char sex;
};

int main(void)
{
	struct Student st = {20, 85, 'M'};  //�������ʱ��ֵ
	struct Student st2;  //������ɺ��ٸ�ֵ
	st2.age = 20;
	st2.score = 85;
	st2.sex = 'M';
	printf("%d %d %c\n", st2.age, st2.score, st2.sex);

	return 0;
}

/*
��Visual C++6.0�е����н��
-----------------------
20 85 M
Press any key to continue
-----------------------
 */