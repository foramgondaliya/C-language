#include<stdio.h>
#include<conio.h>

main()
{
int number;
clrscr();

	printf("enter the number=");
	scanf("%d",&number);

	(number%2==0)
		?printf("this number is even")
		:printf("this number is odd");

	getch();
	return 0;

}