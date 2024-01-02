#include<stdio.h>
main()
{
	int *ptr,i,n,fact=1;
	
	printf("enter the number=");
	scanf("%d",&n);
	
	ptr=&n;
	
	for(i=1;i<=*ptr;i++)
	{
		fact=fact*i;
	}
		
		int *f;
		f=&fact;
		
		printf("factorial number is=%d\n",*f);
	
}
