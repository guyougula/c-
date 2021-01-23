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
	//1.生成一个随机数
	int ret=0;
	int guess=0;//接受猜的数字
	ret=rand()%100+1;//生成1-100的随机数   rand()%100只会生成1-99的随机数
	//2.猜数字
	while(1)
	{
		printf("请猜数字");
		scanf("%d",&guess);
		if(guess>ret)
		{
			printf("猜大了");
		}
		else if(guess<ret)
			printf("猜小了");
		else
		{
			printf("猜对了");
			break;
		
		}
	
	}

}
int main()
{
	int input=0;
	srand((unsigned int)time(NULL));//拿时间戳来设置随机数的生成起点
	do
	{
		menu();
		printf("请选择>");
		scanf("%d",&input);
		switch(input)
		{
		case 0:
			break;
		case 1:
			game();//猜数字游戏
			break;
		default:
			printf("输入错误");
			break;
		
		}
	}
	while(input);
}