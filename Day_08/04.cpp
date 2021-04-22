/*负整数的二进制转十进制*/
/*
	计算 1 0101 1101 的十进制数
	1.首位是 1 表示是负整数
	2.将所有位取反，即为 0 1010 0010 对应的十六进制数为 0XFFFFFFA2
	3.末尾加 1 即为 0 1010 0011 对应十进制数即为 163
 */
# include <stdio.h>

int main(void)
{
	int i = 0XFFFFFFA2;
	printf("%d\n", i);

	return 0;
}
/*
在Visual C++6.0中的运行结果
-----------------------
-94
Press any key to continue
-----------------------
 */