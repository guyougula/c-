#include<stdio.h>
#include<string.h>
int halfsearch(int arr[],int num,int n)
{
	//int n=sizeof(arr)/sizeof(arr[0]);��ʱ��arr��һ����ַ 32λ��sizeof(arr)=4 ������40   arr[0]Ϊ���� ����sizeof(arr[0])=4
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
	printf("����Ҫ���ҵ���");
	scanf("%d",&k);
	if(halfsearch(arr,k,n)==-1)//���ݵ���arr�����һ��Ԫ�صĵ�ַ
		printf("����ʧ��");
	else
		printf("�±�Ϊ%d",halfsearch(arr,k,n));

	return 0;
}