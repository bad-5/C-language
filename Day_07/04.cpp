/*ͨ��������ɶԽṹ���������������*/
# include <stdio.h>
# include <string.h>  //ʹ��strcpy��Ҫ����ͷ�ļ�

struct Student
{
	int age;
	char sex;
	char name[50];
};

void InputStudent(struct Student *);  //������������Ҫָ���βε���������
void OutputStudent(struct Student);

int main(void)
{
	struct Student st;

	InputStudent(&st);  //�Խṹ��������룬������st�ĵ�ַ���͸�����
	printf("%d %c %s\n", st.age, st.sex, st.name);
	OutputStudent(st);  //�Խṹ����������������st��ֵ���͸�����

	return 0;
}

void InputStudent(struct Student * pstu)
{
	(*pstu).age = 20;  //ָ�����pstu���ڴ��st�ĵ�ַ����*pstu��st��ֵ
	strcpy(pstu->name, "Bad");
	pstu->sex = 'M';
}

void OutputStudent(struct Student stu)
{
	printf("%d %c %s\n", stu.age, stu.sex, stu.name);
}

/*
��Visual C++6.0�е����н��
-----------------------
20 M Bad
20 M Bad
Press any key to continue
-----------------------
 */