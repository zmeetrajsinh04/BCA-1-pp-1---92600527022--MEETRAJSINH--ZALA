#include<conio.h>

void main()
{
	int x,y;

	clrscr();

	printf("\n enter the value of x:");
	scanf("%d",&x);

	printf("\n enter the value of y:");
	scanf("%d",&y);

	if(x>y)
	{
		printf("\n value of x is maximum");

	}
	else
	{
		printf("\n value of y is maximum");
	}

	getch();

}