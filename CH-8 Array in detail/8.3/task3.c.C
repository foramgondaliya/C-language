#include<stdio.h>
#include<conio.h>

main()
{
	int a[100][100],i,j,r,c,sum=0;
	clrscr();

	printf("enter the size of row=");
	scanf("%d",&r);

	printf("enter the size of column=");
	scanf("%d",&c);

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	for(i=0,j=0;j<c;j++,i++)
	{
		sum=sum+a[i][j];
	}
	printf("the sum of diagonal elements of an array:%d",sum);

	getch();
}

