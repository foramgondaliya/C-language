#include<stdio.h>
int div();
int div()
{
	int n,i;
	
	printf("enter the value of n=");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(i%3==0 && i%5==0)
		{
			printf("%d ",i);
		}
	}
}
main()
{
	div();
}

	
