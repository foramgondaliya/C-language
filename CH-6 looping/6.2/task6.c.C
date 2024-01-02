#include<stdio.h>
#include<conio.h>

main()
{
	int i,n;
	clrscr();

	printf("enter the number=");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		if(i%3==0 && i%5==0)
		{
			printf("%d ",i);
		}
	}
	getch();
}