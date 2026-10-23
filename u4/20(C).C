#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,N,k=1;
	clrscr();

	printf("Enter number of terms:");
	scanf("%d",&n);

	for(i=1;i<=N;i++)
	{
		k=1;
		for(j=1;j<=i;j++)
		{
			printf(" %d ",k);
			if(k==1)
				k=0;
			else
				k=1;
			}
			printf("\n");
