#include<stdio.h>
#include<conio.h>

main()
{
	int a[100][100],b[100][100],c[100][100],i,j,n,r,co;
	clrscr();

	printf("enter the size of row=");
	scanf("%d",&r);

	printf("enter the size of column=");
	scanf("%d",&co);

	for(i=0;i<r;i++)
	{
		for(j=0;j<co;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<co;j++)
		{
			printf("b[%d][%d]=",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<co;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("Array C is:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<co;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	getch();
}




