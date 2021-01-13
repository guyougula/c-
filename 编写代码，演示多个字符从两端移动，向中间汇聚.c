#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<stdlib.h>
int main()
{
	char ch1[]="welcome to bit !!!";
	char ch2[]="##################";
	int i=0;
	int j=0;
	int k=0,sz=0;
	/*while(ch1[i]!='\0')
	{
		sz++;i++;
	}
	i=0;*/
	sz=sizeof(ch1)/sizeof(ch1[0])-2;
	/*for(k=0;k<=sz;k++)
		ch2[k]='#';*/
	//printf("%s\n",ch1);
	//printf("%s\n",ch2);
	for(i=0,j=sz;i<=j;i++,j--)//或者sz=strlen(ch1)-1;
	{
		printf("%s\n",ch2);
		ch2[i]=ch1[i];
		ch2[j]=ch1[j];
		Sleep(1000);//停顿1000ms=1s
		system("cls");//system--执行命令的一个函数  cls----清空屏幕
	}
	return 0;
}
//  welcome to bit !!!
//  ##################
//  w################!
//  we##############!!
//  wel############!!!
//  welc########## !!!
//  welco########t !!!
//  welcom######it !!!
//  welcome####bit !!!
//  welcome ## bit !!!
//  welcome to bit !!!