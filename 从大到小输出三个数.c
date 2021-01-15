#include<stdio.h>
int main()
{
	int a,b,c;
	 int temp=0;
	a=b=c=0;
	scanf("%d%d%d",&a,&b,&c);
	if(a<b)
	{
		temp=b;
		b=a;
		a=temp;
	}
	if(a<c)
	{
		temp=c;
		c=a;
		a=temp;
	}
	if(b<c)
	{
		temp=b;
		b=c;
		c=temp;
	}
	printf("%d %d %d",a,b,c);
	return 0;
}
//void fun(int arr[])
//{
//	int max=0;int temp;
//	int i=0,k=0,j=0;
//	while(j<3)
//	{
//		for(i=0;i<3;i++)
//		{
//			if(arr[i]>max)
//			{
//				max=arr[i];
//				k=i;
//			}
//		temp=arr[j];
//		arr[j]=arr[k];
//		arr[k]=temp;
//		}
//		j++;
//	}
//}
//int main()
//{
//	int x=0;
//	int arr[3]={1,2,3};
//	fun(arr);
//	
//	while(x<3)
//	{
//		printf("%d\n",arr[x]);
//		x++;
//	}
//	return 0;
//}