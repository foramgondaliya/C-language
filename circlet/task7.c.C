#include<stdio.h>
#include<conio.h>

main()
{
	int i,j;
	clrscr();

	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i==2 && (j>1 && j<5)||i==4 && (j>1 && j<5) || i==5 && (j>1 && j<5) )
			{
				printf(" ");
			}
			else
			{
				printf("*");
			}

		}
		printf("\n");
	}
	getch();
}