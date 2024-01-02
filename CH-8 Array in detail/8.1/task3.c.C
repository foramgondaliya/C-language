#include<stdio.h>
#include<conio.h>

main()
{
	int a[100],b[100],c[100],i,n;
	clrscr();

	printf("enter array size=");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("enter array A's element a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("enter array B's element b[%d]=",i);
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
		c[i]=a[i]+b[i];
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("Array c is=%d\n",c[i]);
	}
	getch();
}


