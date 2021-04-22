/*字符串数组*/
# include <stdio.h>

int main(void)
{
    char str[][5] = {"A","Bad","Boy!"};
	char * p = &str[0][0];
    
    printf("%s\n", p + 5);

    return 0;
}

/*
在Visual C++6.0中的运行结果
-----------------------
Bad
Press any key to continue
-----------------------
 */