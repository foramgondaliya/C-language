#include<stdio.h>
#include<conio.h>

main()
{
	int i,n,fact=1;
	clrscr();

	printf("enter any number=");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("The factorial number=%d",fact);

	getch();

}