#include<stdio.h>
divide();
main()
{
	divide();
}
divide()
{
	int number;
	
	printf("Enter any number=");
	scanf("%d",&number);
	
	if(number%3==0 && number%5==0)
	{
		printf("the given number is divisible by both 3 & 5");
	}
	else
	{
		printf("the given number is not divisible by both 3 & 5");
	}
}
