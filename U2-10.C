#include<conio.h>

void main()
{
	int q,p,d,t,fa;
	float drs;
	clrscr();
	printf("\n Enter value of q,p,d : ");
	scanf("%d%d%d",&q,&p,&d);

	t=q*p;
	drs = (t *d) / 100;
	fa =t - drs;

	printf("\n*************************");
	printf("\n qty   :  %d",q);
	printf("\n price   :  %d",p);
	printf("\n----------------------------");
	printf("\n total   :  %drs",t);
	printf("\n disc(%) : " );
	printf("\n final amount is    :  %d",fa);

	getch();

}



