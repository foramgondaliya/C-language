#include<stdio.h>
#include<conio.h>

main()
{
	int i,j,k;
	clrscr();

	for(i=5;i>=1;i--)
	{
		for(k=i;k>1;k--)
		{
			printf(" ",k);
		}
		for(j=i;j<=5;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	getch();
}