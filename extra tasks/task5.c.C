#include<stdio.h>
#include<conio.h>

main()
{
	int n,f,l,r=0,temp,swap,c,d;
	clrscr();

	printf("enter the number=");
	scanf("%d",&n);

	temp=n;
	l=n%10;
	while(n>10)
	{
		n=n/10;
	}
	f=n;
	n=temp/10;
	while(n>10)
	{
		c=n%10;
		r=r*10+c;
		n=n/10;
	}
	swap=l;
	while(r>0)
	{
		d=r%10;
		swap=swap*10+d;
		r=r/10;
	}
	swap=swap*10+f;
	printf("after swap=%d",swap);

	getch();
}
