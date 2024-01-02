#include<stdio.h>
#include<conio.h>

main()
{
	int i,j,k,r=5;
	clrscr();

	for(i=0;i<r;i++)
	{
		for(k=1;k<r-(i-1);k++)
		{
			printf(" ");
		}
		for(j=0;j<2*i+1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	getch();
}