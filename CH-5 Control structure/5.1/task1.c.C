#include<stdio.h>
#include<conio.h>

main()
{
	int a,b;
	clrscr();

	printf("enter the value of a=");
	scanf("%d",&a);

	printf("enter the value of b=");
	scanf("%d",&b);

	if(a<=b)
	{
	printf("the minimum value is=%d\n",a);
	}
	else
	{
	printf("the is minimum value is=%d\n",b);
	}

	getch();
	return 0;

}