#include<stdio.h>
#include<math.h>
int main()
{
	int i=0;
	int j=0;
	//�ж�i�Ƿ�Ϊ����
	//1.�Գ���
	//2->i-1��������������i������
	/*for(i=100;i<=200;i++)
	{
		for(j=2;j<i;j++)
			if(i%j==0)
				break;
		if(j==i)
			printf("%d ",j);
	}*/

	//2.����i����д��i=a*b��
	//a��b��������һ��������С�ڵ��ڿ�ƽ��i
	for(i=100;i<=200;i++)
	{
		for(j=2;j<=sqrt(i);j++)
		{
			if(i%j==0)
			{
				break;
			}
		}
		if(j>sqrt(i))
			printf("%d ",i);
	}
	return 0;
}
