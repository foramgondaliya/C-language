#include<stdio.h>

main()
{
	int a,b;
	
	printf("enter the value of x=");
	scanf("%d",&a);
	
	printf("enter the value of y=");
	scanf("%d",&b);
	
	printf("before swapping=\n");
	
	printf("x=%d\n",a);
	printf("y=%d\n",b);
	
	
	int x,*y,*z;
	
	y=&a;
	z=&b;
	
	x=*y;
	*y=*z;
	*z=x;
	
	printf("after swapping:\n");
	
	printf("x=%d\n",*y);
	printf("y=%d\n",*z);
		
}
