#include<stdio.h>
int factorial(int n)
{
	int i;int num=1;
	for(i=1;i<=n;i++)
	{
		num*=i;
	}
	return num;
}
int main()
{
	int i,j=0;
	for(i=1;i<=10;i++)
		j+=factorial(i);
	printf("%d",j);
	return 0;
}