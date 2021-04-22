/*要求用户输入三个数，对三个数从大到小排序输出。*/
# include <stdio.h>

int main(void)
{
    int x, y, z;
    int t;  //定义临时变量
    
    printf("请输入三个数（使用空格隔开）：");
    scanf("%d %d %d", &x, &y, &z);
    
    if (x < y)
    {
        t = y;
        y = x;
        x = t;
    }
    if (x < z)
    {
        t = z;
        z = x;
        x = t;
    }
    if (y < z)
    {
        t = z;
        z = y;
        y = t;
    }
    
    printf("输入三个数从大到小的顺序是：%d > %d > %d\n", x, y, z);

    return 0;
}