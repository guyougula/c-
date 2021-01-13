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
	int j=0;int n=0;
	scanf("%d",&n);
	j=factorial(n);
	printf("%d",j);
	return 0;
}