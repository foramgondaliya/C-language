#include<stdio.h>
#include<conio.h>

main()
{
	int num,reverse=0,n;
	clrscr();

	printf("enter the number=");
	scanf("%d",&num);
	n=num;

	while(num>0)
	{

		reverse=reverse*10+num%10;
		num=num/10;
	}
	if(reverse==n)
	{
		printf("this number is a palindrome number",n);
	}
	else
	{
		printf("this number is not a palindrome number",n);
	}

	getch();
}