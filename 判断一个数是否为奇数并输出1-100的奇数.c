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
	printf("������һ������:");
	scanf("%d",&num);
	c=function(num);
	if(1==c)
		printf("������\n");
	else
		printf("��������\n");
	printf("1-100��������\t:");
	while(i<=100)
	{
		int j=function(i);
		if(1==j)
			printf("%d\t",i);
		i++;
	}
	return 0;
}