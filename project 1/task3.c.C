#include<stdio.h>
#include<conio.h>

main()
{
int first,second,third;
clrscr();

	printf("enter the first angle=");
	scanf("%d",&first);

	printf("enter the second angle=");
	scanf("%d",&second);

	third=180-(first+second);

	printf("the third angle is=%d\n",third);

	getch();
	return 0;

}