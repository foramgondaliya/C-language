#include<stdio.h>
#include<conio.h>

main()
{
	int i,j,k;
	clrscr();

	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		for(k=4;k>=i;k--)
		{
			printf("  ",k);
		}
		for(j=i;j>=1;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	getch();
}

