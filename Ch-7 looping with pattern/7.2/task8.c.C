#include<stdio.h>
#include<conio.h>

main()
{
	int i,j,k;
	clrscr();

	for(i=5;i>=1;i--)
	{
		for(k=1;k<=i;k++)
		{
			printf("%d",k);
		}
		for(j=i;j<=4;j++)
		{
			printf("  ",j);
		}
		for(k=i;k>=1;k--)
		{
			printf("%d",k);
		}
		printf("\n");
	}
		for(i=1;i<=5;i++)
	{
		for(k=1;k<=i;k++)
		{
			printf("%d",k);
		}
		for(j=i;j<=4;j++)
		{
			printf("  ",j);
		}
		for(k=i;k>=1;k--)
		{
			printf("%d",k);
		}
		printf("\n");
	}
	getch();
}
