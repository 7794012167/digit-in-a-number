#include<stdio.h>
#include<conio.h>
void main()
{
	int n,e,r,set=0;
	clrscr();
	printf("enter a number");
	scanf("%d",&n);
	printf("enter a digit");
	scanf("%d",&e);
	while(n!=0)
	{
	  r=n%10;
	  n=n/10;
		if(r==e)
		{
			set=1;
			break;
		}
	}
	if(set==0)
	{
		printf("no");
	}
	else
	{
		printf("yes");
	}
	getch();
}