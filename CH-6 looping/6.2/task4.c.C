#include<stdio.h>
#include<conio.h>

main()
{
	int n,i,a,b,c;
	a=0;
	b=1;
	c=0;
	clrscr();

	printf("enter the number=");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		printf("%d ",c);

	a=b;
	b=c;
	c=a+b;
	}
	getch();

}




