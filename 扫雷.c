#include "É¨À×.h"

void Initboard(char board[ROWS][COLS],int row,int col,char ch)
{
	int i=0;
	int j=0;
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			board[i][j]=ch;
}

void Display(char board[ROWS][COLS],int row,int col)
{
	int i=0;
	int j=0;
	for(j=0;j<=col;j++)
			printf("%d ",j);
	printf("\n");
	for(i=1;i<=row;i++)
	{
		printf("%d ",i);
		for(j=1;j<=col;j++)
		{
			printf("%c ",board[i][j]);
		
		}
		printf("\n");
	}
}
void Mineset(char board[ROWS][COLS],int row,int col)
{
	int count=EAST_COUNT;
	while(count)
	{
		int x=rand()%row+1;
		int y=rand()%col+1;
		if(board[x][y]=='0')
		{
			board[x][y]='1';
			count--;
		}
	}
}
int get_mine_count(char mine[ROWS][COLS],int x,int y)
{
	return  mine[x-1][y]+
			mine[x-1][y-1]+
			mine[x][y-1]+
			mine[x+1][y-1]+
			mine[x+1][y]+
			mine[x+1][y+1]+
			mine[x][y+1]+
			mine[x-1][y+1]-8*'0';
}
int win=0;
void fun(char mine[ROWS][COLS],char show[ROWS][COLS],int x,int y)
{
	if(x>=1&&x<=9&&y>=1&&y<=9&&(show[x][y]!=' '))
	{
		if(get_mine_count(mine,x,y)==0)
		{
			show[x][y]=' ';
			win++;
			fun(mine,show,x-1,y);
			fun(mine,show,x-1,y-1);
			fun(mine,show,x,y-1);
			fun(mine,show,x+1,y-1);
			fun(mine,show,x+1,y);
			fun(mine,show,x+1,y+1);
			fun(mine,show,x,y+1);
			fun(mine,show,x-1,y+1);
		}
		else
			{
				show[x][y]=get_mine_count(mine,x,y)+'0';
				win++;
			}
	}
}

void Findmine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col)
{
	int x=0;
	int y=0;
	int count=0;
	while(win<(row*col-EAST_COUNT))
	{
		printf("ÇëÊäÈë×ø±ê:>");
		scanf("%d%d",&x,&y);
		if(x>=1&&x<=9&&y>=1&&y<=9)
		{
			if(mine[x][y]=='1')
			{
				printf("É¨À×Ê§°Ü");
				Display(mine,ROW,COL);
				break;
			}
			else
			{
				//fun(mine,show,x,y);
				count=get_mine_count(mine,x,y);
				show[x][y]=count+'0';
				Display(show,ROW,COL);
				win++;
			}
			if(win==(row*col-EAST_COUNT))
			{
				printf("É¨À×³É¹¦");
				Display(mine,ROW,COL);
			}
		}
		else
			printf("ÊäÈë´íÎó£¬ÇëÖØÐÂÊäÈë");
	}
}
