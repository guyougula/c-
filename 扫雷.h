#include<stdio.h>
#include<stdlib.h>
#include<time.h>


#define ROWS 11
#define COLS 11
#define ROW ROWS-2
#define COL COLS-2
#define EAST_COUNT 10

void Initboard(char board[ROWS][COLS],int row,int col,char ch);
void Display(char board[ROWS][COLS],int row,int col);
void Mineset(char board[ROWS][COLS],int row,int col);
void Findmine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col);
int get_mine_count(char mine[ROWS][COLS],int x,int y);
void fun(char mine[ROWS][COLS],char show[ROWS][COLS],int x,int y);