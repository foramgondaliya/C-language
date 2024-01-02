#include<stdio.h>
#include<conio.h>

main()
{
	int i,j,k;
	clrscr();

	for(i=5;i>=1;i--)
	{
	     for(k=4;k>=i;k--)
	     {
		printf(" ",k);
	     }
	      for(j=1;j<=i;j++)
	      {
		printf("%d",j%2);
	      }
		printf("\n");
	}
	getch();
}