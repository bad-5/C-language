/*数组赋值*/
# include <stdio.h>

int main(void)
{
    int a[5];
    int i;
    
    printf("请输入a[0]的值：");
    scanf("%d", &a[0]);
    printf("a[0] = %d\n", a[0]);

    printf("请输入a[3]的值：");
    scanf("%d", &a[3]);
    printf("a[3] = %d\n", a[3]);
    printf("---------------\n");

    for (i = 0; i < 5; ++i)
        printf("a[%d] = %d\n", i, a[i]);

    return 0;
}

/*
在Visual C++6.0中的运行结果
-----------------------
请输入a[0]的值： 1
a[0] = 1
请输入a[3]的值：3
a[3] = 3
---------------
a[0] = 1
a[1] = -858993460
a[2] = -858993460
a[3] = 3
a[4] = -858993460
Press any key to continue
-----------------------
 */