#include<stdio.h>
int main()
{
	int x=1;
	{
		int x=2;
		{
			int x=3;
			printf("%d\n",x);
		}
		printf("%d\n",x);
	}
	printf("%d\n",x);
	return 0;
}
//在快语句中定义的变量，只在本块范围内有效