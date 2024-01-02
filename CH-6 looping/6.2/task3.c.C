#include<stdio.h>
#include<conio.h>

main()
{
	int number,i;
	i=1;

	clrscr();

	printf("enter the number=");
	scanf("%d",&number);

	do{
	       if(i%2==0)
		{
		printf("%d ",i);
		}
		i++;

	}while(i<=number);

	getch();
}