##include<stdio.h>
#include<stdlib.h>
int menu()
{
	printf("**********************\n");
	printf("****1.play   0.exit***\n");
	printf("**********************\n");
	return 0;
}
int game()
{
	//1.����һ�������
	int ret=0;
	int guess=0;//���ܲµ�����
	ret=rand()%100+1;//����1-100�������   rand()%100ֻ������1-99�������
	//2.������
	while(1)
	{
		printf("�������");
		scanf("%d",&guess);
		if(guess>ret)
		{
			printf("�´���");
		}
		else if(guess<ret)
			printf("��С��");
		else
		{
			printf("�¶���");
			break;
		
		}
	
	}

}
int main()
{
	int input=0;
	srand((unsigned int)time(NULL));//��ʱ�����������������������
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d",&input);
		switch(input)
		{
		case 0:
			break;
		case 1:
			game();//��������Ϸ
			break;
		default:
			printf("�������");
			break;
		
		}
	}
	while(input);
}