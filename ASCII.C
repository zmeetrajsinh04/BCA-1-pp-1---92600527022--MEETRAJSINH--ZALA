 // display ASCII code of input character
 #include<conio.h>
 #include<stdio.h>

 void main()
 {
	char x;
	clrscr();
	printf("\n Enter any character : ");
	scanf("%c",&x);

	printf("\n Input character is : %c",x);
	printf("\n ASCII code is : %d",x);
	getch();
 }