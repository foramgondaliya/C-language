#include<stdio.h>

main()
{
	int n;
	
	printf("enter array's size=");
	scanf("%d",&n);
	
	int i,*ptr[10],a[10];
	
	printf("enter array's element=\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);	
	}
	for(i=0;i<n;i++)
	{
		ptr[i]=&a[i];
	}
	for(i=0;i<n;i++)
	{
		a[i]=(*ptr[i])*(*ptr[i]);
		printf("square of each element=%d\n",a[i]);
	}	
	
}
