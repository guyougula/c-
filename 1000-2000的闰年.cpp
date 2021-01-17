#include<stdio.h>
int main()
{
	int year=0;int n=0;
	//判断year是否为闰年
		//1.能被4整除并且不能被100整除
		//2.能被400整除
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