#include<stdio.h>
#include<conio.h>

main()
{
	int n[100],i,a,l=0;
	clrscr();

	printf("enter array size=");
	scanf("%d",&a);

	for(i=0;i<a;i++)
	{
		printf("enter array elements=");
		scanf("%d",&n[i]);
	}
	for(i=0;i<a;i++)
	{
		l++;
	}
	printf("length of an array=%d",l);

	getch();
}