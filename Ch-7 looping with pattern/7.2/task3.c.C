#include<stdio.h>
#include<conio.h>

main()
{
	int i,j,k;
	clrscr();

	for(i=5;i>=1;i--)
	{
		for(k=1;k<i;k++)
		{
			printf(" ",k);
		}
		for(j=i;j<=5;j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
	getch();
}
