#include<stdio.h>
int main()
{
	int year=0;int n=0;
	//�ж�year�Ƿ�Ϊ����
		//1.�ܱ�4�������Ҳ��ܱ�100����
		//2.�ܱ�400����
	for(year=1000;year<=2000;year++)
	{
		if(year%4==0&&year%100!=0)
			{
				printf("%d ",year);
				n++;
			}
		else if(year%400==0)
			{
				printf("%d ",year);
				n++;
			}
	}
	printf("%d",n);
	return 0;
}