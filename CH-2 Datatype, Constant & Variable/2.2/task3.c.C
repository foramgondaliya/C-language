#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf

main()
{
float area,b,h;

clrscr();

	p("enter the value of b=");
	s("%f",&b);

	p("enter the value of h=");
	s("%f",&h);

	area=(b*h)/2;

	p("the area of a triangle is=%.2f",area);

	getch();
	return 0;

}

