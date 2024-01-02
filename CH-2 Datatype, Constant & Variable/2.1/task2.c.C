#include<stdio.h>
#include<conio.h>

main()
{
int a=12,b=6;

clrscr();

	printf("--------\n");
	printf("| %d+%d=%d|\n",a,b,a+b);
	printf("| %d-%d=%d |\n",a,b,a-b);
	printf("| %d*%d=%d|\n",a,b,a*b);
	printf("| %d/%d=%d |\n",a,b,a/b);
	printf("| %d%%%d=%d |\n",a,b,a%b);
	printf("--------\n");

	getch();
	return 0;

}