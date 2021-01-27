#include<stdio.h>
#include<string.h>
int halfsearch(int arr[],int num,int n)
{
	//int n=sizeof(arr)/sizeof(arr[0]);此时的arr是一个地址 32位下sizeof(arr)=4 而不是40   arr[0]为整型 所以sizeof(arr[0])=4
	int low=0,high=n-1,mid=0;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(arr[mid]==num)
			return mid;
		else if(arr[mid]<num)
			low=mid+1;
		else
			high=mid-1;
	}
		return -1;

}
int main()
{
	int arr[]={0,1,2,3,4,5,6,7,8,9,};
	int n=sizeof(arr)/sizeof(arr[0]);
	int k=0;
	printf("输入要查找的数");
	scanf("%d",&k);
	if(halfsearch(arr,k,n)==-1)//传递的是arr数组第一个元素的地址
		printf("查找失败");
	else
		printf("下标为%d",halfsearch(arr,k,n));

	return 0;
}