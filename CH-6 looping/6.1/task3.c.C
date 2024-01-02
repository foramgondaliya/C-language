#include<stdio.h>
#include<conio.h>

main()
{
	int n,i;
	i=1;

	clrscr();

	printf("enter the number=");
	scanf("%d",&n);


	while(n>=i)
	{
		if(n%2!=0)
		printf("%d ",n);
		n--;
	}

	getch();
	return 0;

}