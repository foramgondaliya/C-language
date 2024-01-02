#include<stdio.h>
#include<conio.h>

main()
{
	int a[5][5],i,j,sum=0;
	clrscr();

	printf("enter array's element=");

	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(i==0 || i==4 || j==0 || j==4)
			{
				sum=sum+a[i][j];
			}
		}
	}
	printf("the sum of boundry elements of an array:%d",sum);

	getch();
}