/*����&�Լ�*/
# include <stdio.h>

int main(void)
{
    int i, j, k, m;
    
    i = j = 5;
    k = i++;  //������ʽ��i����ǰ��ֵ
    m = ++j;  //������ʽ��j�������ֵ
    
    printf("i = %d, j = %d, k = %d, m = %d\n", i, j, k, m);

    return 0;
}

/*
��Visual C++6.0�е����н��
-----------------------
i = 6, j = 6, k = 5, m = 6
Press any key to continue
-----------------------
 */