#include<stdio.h>
int main()
{
	int x=1;
	{
		int x=2;
		{
			int x=3;
			printf("%d\n",x);
		}
		printf("%d\n",x);
	}
	printf("%d\n",x);
	return 0;
}
//�ڿ�����ж���ı�����ֻ�ڱ��鷶Χ����Ч