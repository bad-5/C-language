# include <stdio.h>

int main()
{
	char ch[7]={"65ab21"}; 
	int i,s=0;

	printf("%d\n", ch[0]);

	for(i=0;ch[i]>='0'&&ch[i]<='9';i+=2)
	{
		printf("%d\n", ch[i]);
		s=10*s+ch[i]-'0';
	}

	printf("%d\n",s);

	return 0;
}