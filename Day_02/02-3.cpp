/*���ű��ʽ*/
# include <stdio.h>

int main(void)
{
    int i, j;
    
    i = (2, 3, 5, 6);  //���ʽ��������ִ�У�����i��ֵΪ6
    
    printf("i = %d\n", i);
    
    j = (i++, ++i, i+2, i-1);  //����������j��ֵΪi++��++i���ֵ�ټ�1

    printf("i = %d, j = %d\n", i, j);

    return 0;
}

/*
��Visual C++6.0�е����н��
-----------------------
i = 6
i = 8, j = 7
Press any key to continue
-----------------------
 */