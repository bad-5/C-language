/*ͨ��������ɶԽṹ���������������*/
# include <stdio.h>
# include <string.h>  //ʹ��strcpy��Ҫ����ͷ�ļ�

struct Student
{
	int age;
	char sex;
	char name[50];
};

void InputStudent(struct Student stu);

int main(void)
{
	struct Student st;

	InputStudent(st);
	printf("%d %c %s\n", st.age, st.sex, st.name);

	return 0;
}


//�˺��������޸���������st��ֵ
void InputStudent(struct Student stu)
{
	stu.age = 10;
	strcpy(stu.name, "Bad");  //���ַ����Ĵ������ʹ��strcpy������ֱ��ʹ��stu.name='Bad'
	stu.sex = 'M';
}
/*
��Visual C++6.0�е����н��
-----------------------
-858993460 ?���������������������������������������������������p�.
Press any key to continue
-----------------------
 */