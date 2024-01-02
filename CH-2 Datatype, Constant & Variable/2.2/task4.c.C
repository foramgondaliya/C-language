#include<stdio.h>
#include<conio.h>
#define s scanf

main()
{

float p,r,t,interest;

clrscr();

	printf("enter the value of p=");
	s("%f",&p);

	printf("enter the value of r=");
	s("%f",&r);

	printf("enter the value of t=");
	s("%f",&t);

	interest=p*r*t/100;

	printf("the interest is=%.2f",interest);

	getch();
	return 0;

}
