#include "������.h"
  void menu()
{
	printf("***************************\n");
	printf("******1.play    0.exit*****\n");
	printf("***************************\n");
}
//��Ϸ�㷨��ʵ��
void game()
{
	char ret=0;
	//����--����߳���������Ϣ
	char board[ROW][COL]={0};
	InitBoard(board,ROW,COL);//ȫ���ǿո�
	//��ӡ����
	DisplayBoard(board,ROW,COL);
	//����
	while(1)
	{
	//1.�����
		PlayerMove(board,ROW,COL);
		DisplayBoard(board,ROW,COL);
		//�ж�����Ƿ�Ӯ
		ret=Iswin(board,ROW,COL);
		if(ret!='C')
		{
			break;
		}
	//2.������
		ComputerMove(board,ROW,COL);
		DisplayBoard(board,ROW,COL);
		//�жϵ����Ƿ�Ӯ
		ret=Iswin(board,ROW,COL);
		if(ret!='C')
		{
			break;
		}
	}
	if(ret=='*')
	{
		printf("���Ӯ\n");
	}
	else if(ret=='#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}
void test()
{
	int input=0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>:");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("��Ϸ����\n");
			break;
		default:
			printf("�������\n");
			break;
		}
	
	}
	while(input);
}
int main()
{
	test();
	return 0;
}
 
