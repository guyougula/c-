#include<stdio.h>
int halfsearch(int x,int v[],int n)
{
	int high=n-1;
	int low=0;
	int mid=0;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(v[mid]==x)
			return mid;
		else if(v[mid]<x)
				low=mid+1;
		else
			high=mid-1;
	}
	return 0;
}
int main()
{
	int x=0;int j=0;
	int arr[]={0,1,2,3,4,5,6,7,8,9};
	int sz=sizeof(arr)/sizeof(arr[0]);
	printf("请输入需要查找的值\n");
	scanf("%d",&x);
	j=halfsearch(x,arr,sz);
	if(j==0)
		printf("没有找到\n");
	else
		printf("找到了，下标是%d",j);

}