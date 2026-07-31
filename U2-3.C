

void main()
{
	float pa,r,y,si;
	clrscr();

	printf("enter principal amount:");
	scanf("%f" , &pa);

	printf("enter rate of intrest :");
	scanf("%f" , &r);

	printf("enter number of years:");
	scanf("%f" , &y);

	si=pa*r*y/100;

	printf(" the simple intrest is %2f",si);
	printf("\n*******************************");
	printf("\n principal amount :%f",pa);
	printf("\n rate of intrest :%f",r);
	printf("\n number of year :%f",y);
	printf("\n*******************************");
	printf(" \n the simple intrest is %2f",si);


    getch();


}
