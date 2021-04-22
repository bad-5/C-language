/*指针常见问题*/
# include <stdio.h>

int main(void)
{
	int * p;
	int i = 5;

	printf("%d\n", p);
	*p = i;
	printf("%d\n", *p);

	return 0;
}