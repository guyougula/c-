#include<stdio.h>
#include<string.h>
int main()
{
	char password[20]={0};
	int i=0;
	printf("ÇëÊäÈëÃÜÂë\n");
	for(i=0;i<3;i++)
	{
		scanf("%s",password);
		if(strcmp(password,"123456")==0)
		{	printf("µÇÂ¼³É¹¦\n");
			break;
		}
	}
	if(i==3)
		printf("µÇÂ¼Ê§°Ü\n");

	return 0;
}