#include<stdio.h>
#include<conio.h>

main()
{
	int i,number=0;
	clrscr();

	printf("enter the number=");
	scanf("%d",&i);
	while(i>0)
	{
		i=i/10;
		number++;
	}
	printf("the number of digit is=%d",number);

	getch();
}