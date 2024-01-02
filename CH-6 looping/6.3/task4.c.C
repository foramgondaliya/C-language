#include<stdio.h>
#include<conio.h>

main()
{
	int x,y,j,i;
	clrscr();

	printf("enter the first value=");
	scanf("%d",&x);

	printf("enter the last value=");
	scanf("%d",&y);

	for(i=x;i<=y;i++)
	{
		for(j=1;j<=10;j++)
		{
			printf("%d*%d=%d\n",i,j,i*j);
		}
		printf("\n");
	}
getch();
}
