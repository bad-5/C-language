/*Í¨¹ıº¯ÊıÍê³É¶Ô½á¹¹Ìå±äÁ¿µÄÊäÈëºÍÊä³ö*/
# include <stdio.h>
# include <string.h>  //Ê¹ÓÃstrcpyĞèÒª¶¨ÒåÍ·ÎÄ¼ş

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


//´Ëº¯Êı²»ÄÜĞŞ¸ÄÖ÷º¯ÊıÖĞstµÄÖµ
void InputStudent(struct Student stu)
{
	stu.age = 10;
	strcpy(stu.name, "Bad");  //¶Ô×Ö·û´®µÄ´¦Àí±ØĞëÊ¹ÓÃstrcpy£¬²»ÄÜÖ±½ÓÊ¹ÓÃstu.name='Bad'
	stu.sex = 'M';
}
/*
ÔÚVisual C++6.0ÖĞµÄÔËĞĞ½á¹û
-----------------------
-858993460 ?ÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌÌpÿ.
Press any key to continue
-----------------------
 */