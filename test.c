#include"扫雷.h"
void menu()
{
	printf("******************\n");
	printf("******1.play******\n");
	printf("******0.exit******\n");
	printf("******************\n");
}
void game()
{
	char mine[ROWS][COLS]={0};
	char show[ROWS][COLS]={0};
	Initboard(mine,ROWS,COLS,'0');
	//Display(mine,ROW,COL);
	Initboard(show,ROWS,COLS,'*');
	//Display(show,ROW,COL);
	Mineset(mine,ROW,COL);
	Display(mine,ROW,COL);
	Findmine(mine,show,ROW,COL);
	
	
}
void test()
{
	int input=0;
	srand((signed int )time(NULL));
	do
	{
		menu();
		printf("请输入:>");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("输入错误，请重新输入\n");
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