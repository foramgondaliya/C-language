#include<stdio.h>

void main()
{
	int i,number;

	printf("enter the number");
	scanf("%d",&i);

	while(i>0)
	{
		i=i/10;
		number++;
	}
	printf("the number of digits are=%d",number);


}