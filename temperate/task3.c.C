#include<stdio.h>
#include<conio.h>

main()
{
	int i,first,last,sum;
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
	printf("the first number is=%d\n",first);

	sum=first+last;
	printf("the sum of first and last digit is=%d",sum);

	getch();

}

