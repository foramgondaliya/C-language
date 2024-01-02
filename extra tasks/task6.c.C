#include<stdio.h>
#include<conio.h>

main()
{
	int number,prime=0,i;
	clrscr();

	printf("enter the number=");
	scanf("%d",&number);

	for(i=2;i<=number/2;i++)
	{
		if(number%i==0)
		{
			prime++;
			break;
		}
	}
	if(prime==0 && number!=1)
	{
		printf("%d is a prime number",number);
	}
	else
	{
		printf("%d is not a prime number",number);
	}
	getch();
}