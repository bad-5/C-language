/*�߼������*/
# include <stdio.h>

int main(void)
{
    int i = 10;
    int j = 20;
    int m;
    int n;
    
    m = (1 > 2) && (i = 5);  //1>2Ϊ�٣�ִ�������㣬��ִ��i=5
    n = (1 > 2) || (j = 5);  //1>2Ϊ�٣�ִ�л����㣬��Ҫִ��j=5
    printf("m = %d, i = %d\n", m, i);
    printf("n = %d, j = %d\n", n, j);

    return 0;
}

/*
��Visual C++6.0�е����н��
-----------------------
m = 0, i = 10
n = 1, j = 5
Press any key to continue
-----------------------
 */