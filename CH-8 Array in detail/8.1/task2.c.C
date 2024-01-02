#include<stdio.h>
#include<conio.h>

main()
{
	float n[100],i,ave,b=0,a;
	clrscr();

	printf("enter array size=");
	scanf("%f",&a);

	for(i=0;i<a;i++)
	{
		printf("enter array element=");
		scanf("%f",&n[i]);
	}
	for(i=0;i<a;i++)
	{
		printf("n[%f]=%f\n",n[i],i);
	}
	for(i=0;i<a;i++)
	{
		b=b+n[i];
	}
	ave=b/a;
	getch();
}