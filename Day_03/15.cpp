/*continue*/
# include <stdio.h>

int main(void)
{
    int i;
    char ch;
    
    scanf("%d", &i);
    printf("i = %d\n", i);

    while ((ch = getchar()) != '\n')  //��������û�����ķǷ��ַ�
        continue;

    int j;
    scanf("%d", &j);
    printf("j = %d\n", j);

    return 0;
}