#include<stdio.h>
#include<string.h>
int main()
{
	char password[20]={0};
	int i=0;
	printf("����������\n");
	for(i=0;i<3;i++)
	{
		scanf("%s",password);
		if(strcmp(password,"123456")==0)
		{	printf("��¼�ɹ�\n");
			break;
		}
	}
	if(i==3)
		printf("��¼ʧ��\n");

	return 0;
}