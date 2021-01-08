#include<stdio.h>
int function(int a)
{
	int b;
	b=a%2;
	if(b==1)
		return 1;
	else
		return 0;
}
int main()
{
	int num;
	int c;
	int i=1;
	printf("请输入一个数字:");
	scanf("%d",&num);
	c=function(num);
	if(1==c)
		printf("是奇数\n");
	else
		printf("不是奇数\n");
	printf("1-100的奇数有\t:");
	while(i<=100)
	{
		int j=function(i);
		if(1==j)
			printf("%d\t",i);
		i++;
	}
	return 0;
}