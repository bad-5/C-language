/*continue*/
# include <stdio.h>

int main(void)
{
    int i;
    char ch;
    
    scanf("%d", &i);
    printf("i = %d\n", i);

    while ((ch = getchar()) != '\n')  //用于清空用户输入的非法字符
        continue;

    int j;
    scanf("%d", &j);
    printf("j = %d\n", j);

    return 0;
}