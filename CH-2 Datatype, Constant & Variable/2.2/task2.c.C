#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf

main()
{
float area,height,width;

clrscr();

	p("enter the value of height=");
	s("%f",&height);

	p("enter the value of width=");
	s("%f",&width);

	area=height*width;

	p("the area of rectangle is=%.2f",area);

	getch();
	return 0;

}