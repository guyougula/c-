#include<stdio.h>
#define ROW 10
#define COL 10
int main()
{
	char board[ROW][COL]={0};
	int i=0;
	int j=0;

	for(i=0;i<ROW;i++)
	{	
		for(j=0;j<COL;j++)
		{
			//1.打印一行数据
			printf(" %c ",board[i][j]);
			if(j<COL-1)
				printf("|");
		}
		printf("\n");
		//2.打印分割行
		if(i<ROW-1)
		{
			for(j=0;j<COL;j++)
			{
				printf("---");
				if(j<COL-1)
					printf("|");
			}
		
		}
		printf("\n");
		
	}

	return 0;
}