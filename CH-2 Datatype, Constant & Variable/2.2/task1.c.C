#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf

main()
{
 const float pi=3.14;
 float radius,area ;

clrscr();

	p("pi=%.2f\n",pi);

	p("enter the value of radius= ");
	s("%f",&radius);

       area= pi*radius*radius;

	printf("the area of circle is=%.2f",area);

	getch();
	return 0;

 }

