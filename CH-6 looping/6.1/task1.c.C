#include<stdio.h>
#include<conio.h>

main()
{
	int i,n;
	i=1;

	clrscr();

	printf("enter value of n=");
	scanf("%d",&n);

	while(i<=n)
	{
		printf("%d ",i);
		i++;
	}

	getch();
	return 0;
}
