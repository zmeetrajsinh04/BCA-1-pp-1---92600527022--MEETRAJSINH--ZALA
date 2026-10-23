#include<stdio.h>
#include<conio.h>

void main()
{
	 int i,j,N;
	 clrscr();

	 printf("\n Enter value of N :");
	 scanf ("%d",&N);

		 for(i=1;i<=N;i++)
	 {

	 for(j=1;j<=i;j++)
	 {
		printf(" %d ", i);
	 }
		printf("\n");
	 }

getch();
}