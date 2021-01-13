#include<stdio.h>
int binsearch(int x,int v[],int n)
{
	int i=0;
	for(i=0;i<n;i++)
	{
		if(v[i]==x)
		{
			return i;
			break;
		}
	}
	return 0;
}
int main()
{
	int arr[10]={0,1,2,3,4,5,6,7,8,9,};
	int j=0;
	int x=0;
	printf("请输入要查找的数字\n");
	scanf("%d",&x);
	j=binsearch(x,arr,10);
	if(j==0)
		printf("输入有误\n");
	else
		printf("查找数字下标为%d",j);

	return 0;
}