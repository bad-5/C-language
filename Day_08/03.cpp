/*负整数的十进制转二进制*/
/*
	计算 -5 的二进制
	1.计算 5 的二进制为 0101
	2.所有位取反为 1010
	3.末尾加 1 为 1011
	4.前面所有位数用 1 补全
 */
# include <stdio.h>

int main(void)
{
	int i = -5;
	printf("%#X\n", i);  //以十六进制输出

	return 0;
}

/*
在Visual C++6.0中的运行结果
-----------------------
0XFFFFFFFB
Press any key to continue
-----------------------
 */