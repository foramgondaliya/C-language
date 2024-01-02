#include<stdio.h>
#include<conio.h>

main()
{
	int i,j,k;
	clrscr();

	for(i=1;i<=5;i++)
	{
		for(k=4;k>=i;k--)
		{
			printf(" ",k);
		}
		for(j=i;j>=1;j--)
		{
			printf("%d",j%2);
		}
		printf("\n");
	}
	getch();
}

