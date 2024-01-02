#include<stdio.h>
#include<conio.h>

main()
{
	int i,first,last;
	clrscr();

	printf("enter the number=");
	scanf("%d",&i);

	last=i%10;
	printf("the last digit is=%d\n",last);

	while(i>=10)
	{
		i=i/10;
	}
	first=i;
	printf("the first digit is=%d\n",first);

	getch();

}

