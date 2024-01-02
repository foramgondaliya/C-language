#include<stdio.h>
#include<conio.h>

main()
{
int a,b,c,d;
clrscr();

	printf("enter the value of a=");
	scanf("%d",&a);

	printf("enter the value of b=");
	scanf("%d",&b);

	printf("enter the value of c=");
	scanf("%d",&c);

	printf("enter the value of d=");
	scanf("%d",&d);

	if(a==b && a==c && a==d )
	{
	printf("all values are same");
	}
	else if(a==b && a==c)
	{
	printf("a and b and c same");
	}
	else if(b==c && b==d)
	{
	printf("b and c and d are same");
	}
	else if(a==b && a==d)
	{
	printf("a and b and d are same");
	}
	else if(a==c && a==d)
	{
	printf("a and c and d are same");
	}
	else if(a==b)
	{
	printf("a and b are same");
	}
	else if(a==c)
	{
	printf("a and c are same");
	}
	else if(a==d)
	{
	printf("a and d are same");
	}
	else if(b==c)
	{
	printf("b and c are same");
	}
	else if(b==d)
	{
	printf("b and d are same");
	}
	else if(c==d)
	{
	printf("c and d are same");
	}
	else if(a>b && a>c)
	{
		if(a>d)
		{
			printf("the maximum number is=%d",a);
		}
		else
		{
			printf("the maximum number is=%d",d);
		}
	}
	else if(b>c)
	{
		if(b>d)
		{
			printf("the maximum number is=%d",b);
		}
		else
		{
			printf("the maximum number is=%d",d);
		}
	}
	else if(c>d)
	{
		printf("the maximum number is=%d",c);
	}
	else
	{
		printf("the maximum number is=%d",d);
	}

	getch();
	return 0;

}


