/*return��break������*/
# include <stdio.h>
void f(void)
{
    int i;

    for (i = 0; i < 5; ++i)
    {
        printf("Bad!\n");
        break;  //��ֹ����forѭ��
    }

    return;  //��ֹ����f����
    printf("Boy!\n");  //�������
}

int main(void)
{
    f();

    return 0;
}

/*
��Visual C++6.0�е����н��
-----------------------
Bad!
Press any key to continue
-----------------------
 */
