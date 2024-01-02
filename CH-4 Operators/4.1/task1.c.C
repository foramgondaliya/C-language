#include<stdio.h>
#include<conio.h>

main()
{
int a,b,c;

clrscr();

	printf("enter the value of a=");
	scanf("%d",&a);

	printf("enter the value of b=");
	scanf("%d",&b);

	printf("the value of a is=%d\n",a);
	printf("the value of b is=%d\n",b);

	c=a;
	a=b;
	b=c;

	printf("the new value of a is=%d\n",a);
	printf("the new value of b is=%d\n",b);

	getch();
	return 0;

}



