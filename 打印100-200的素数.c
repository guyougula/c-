#include<stdio.h>
#include<math.h>
int main()
{
	int i=0;
	int j=0;
	//判断i是否为素数
	//1.试除法
	//2->i-1中若不能整除则i是素数
	/*for(i=100;i<=200;i++)
	{
		for(j=2;j<i;j++)
			if(i%j==0)
				break;
		if(j==i)
			printf("%d ",j);
	}*/

	//2.任意i都能写成i=a*b；
	//a和b中至少有一个数字是小于等于开平方i
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
