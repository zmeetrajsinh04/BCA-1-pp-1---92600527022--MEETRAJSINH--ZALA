//wap to display 1 to 10 using loop

#include<stdio.h>
#include<conio.h>

void main()

{
	int i,n;

	clrscr();

	printf("\n Enter Value of N : ");
	scanf("%d",&n);

	for(i=1;i<=n;i=i+2)
	{
		printf(" %d",i);
	}

	getch();
}