/*�ַ�������*/
# include <stdio.h>

int main(void)
{
    char str[][5] = {"A","Bad","Boy!"};
	char * p = &str[0][0];
    
    printf("%s\n", p + 5);

    return 0;
}

/*
��Visual C++6.0�е����н��
-----------------------
Bad
Press any key to continue
-----------------------
 */