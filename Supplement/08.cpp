# include <stdio.h>

int main(void)
{
    int a = 5, b = 4, c = 3, d = 2;
    
    if (a > b > c)  //先执行a>b，为真，返回1，再比较1>c
    	printf("%d\n", d);
    else if ((c - 1 >= d) == 1)  //c-1大于等于d成立，返回1
    	printf("%d\n", d + 1);
    else
    	printf("%d\n", d + 2);

    return 0;
}
/*
在Visual C++6.0中的运行结果
-----------------------
3
Press any key to continue
-----------------------
 */