#include<stdio.h>
#include<conio.h>

main()
{
	int i,n;
	i=1;

	clrscr();

	printf("enter the value of n=");
	scanf("%d",&n);

	while(n>=i)
	{
		printf("%d ",n);
		n--;
	}
	getch();
	return 0;

}