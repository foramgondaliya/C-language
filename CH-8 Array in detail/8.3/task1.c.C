#include<stdio.h>
#include<conio.h>

main()
{

	float a[50][50],i,j,c,r,sum=0,g=0,avr;

	clrscr();

	printf("enter the size of row=");
	scanf("%f",&r);

	printf("enter the size of column=");
	scanf("%f",&c);

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%.0f][%.0f]=",i,j);
			scanf("%f",&a[i][j]);
		}
	}

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum=sum+a[i][j];
			g++;
		}

	}

	avr=sum/g;

	printf("Average of an array= %.2f ",avr);

	getch();

}

