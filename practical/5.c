#include<stdio.h>

main()
{
	int a,b,c;

	printf("enter the value of a=");
	scanf("%d",&a);

	printf("enter the value of b=");
	scanf("%d",&b);

	printf("enter the value of c=");
	scanf("%d",&c);

	(a==b && b==c)
		? printf("all values are same")
		:(a==c)
			?printf("a and c are same")
			:(a==b)
				?printf("a nad b are same")
				:(b==c)
				       ?printf("b and c are same")
				       :(a>b)
						?printf("a is max")
						:(a>c)
							?printf("a is max")
							:(b>c)
								?printf("b is max")
								:printf("c is max");


}

