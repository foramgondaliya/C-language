#include<stdio.h>
#include<conio.h>

main()
{
	int x,y;
	clrscr();

	printf("enter the first number=");
	scanf("%d",&x);

	printf("enter the second number=");
	scanf("%d",&y);

	while(x<=y)
	{
		if(x%4==0)
		printf("%d ",x);
		x++;
	}

	getch();
	return 0;
}


