//Õ·×ªÏà³ý·¨
#include<stdio.h>
int main()
{
	int m=24;
	int n=240;
	int r;
	while(m%n)
	{
		r=m%n;
		m=n;
		n=r;

	}
	printf("%d\n",n);
}
