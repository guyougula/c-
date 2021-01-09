#include <stdio.h>
#define PI 3.14
int main()
{
	float R;
	printf("请输入半径:\n");
	scanf("%f",&R);
	printf("半径为%f的圆的面积为%4.2f",R,(R*R*PI));//%4.2f 输出长度为4，其中小数位为两位
	return 0;
}