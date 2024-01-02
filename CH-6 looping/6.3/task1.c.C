#include<stdio.h>
#include<conio.h>

main()
{
	int n,i,a=0;
	clrscr();

	printf("enter the number=");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		a=a+i;
	}
		printf("the sum of all numbers is=%d",a);

	getch();
}