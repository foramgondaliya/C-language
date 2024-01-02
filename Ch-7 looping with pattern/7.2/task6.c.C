#include<stdio.h>
#include<conio.h>

main()
{
	int i,j,k;
	clrscr();

	for(i=1;i<=5;i++)
	{
		for(k=i;k>=1;k--)
		{
			printf(" ",k);
		}
		for(j=5;j>=i;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	getch();
}