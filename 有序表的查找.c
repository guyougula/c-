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
	printf("������Ҫ���ҵ�����\n");
	scanf("%d",&x);
	j=binsearch(x,arr,10);
	if(j==0)
		printf("��������\n");
	else
		printf("���������±�Ϊ%d",j);

	return 0;
}