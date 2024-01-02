#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,n,i;
	clrscr();
	 n=1;
	printf("enter the first number=");
	scanf("%d",&a);

	printf("enter the second number=");
	scanf("%d",&b);

	for(i=1;i<=b;i++)
	{
		n=n*a;

		 printf("%d ",n);

	}
	getch();
}



