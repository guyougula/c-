#include <stdio.h>
#define PI 3.14
int main()
{
	float R;
	printf("������뾶:\n");
	scanf("%f",&R);
	printf("�뾶Ϊ%f��Բ�����Ϊ%4.2f",R,(R*R*PI));//%4.2f �������Ϊ4������С��λΪ��λ
	return 0;
}