#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j;
	clrscr();

	for(i=2;i<=20;i=i+2)
	{
		printf(" %d",i);
	}

	j=2;
	while(j<=20)
	{
	printf("\t%d",j);
	j++;
	}

	getch();
}