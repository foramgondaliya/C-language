#include<stdio.h>
#include<conio.h>

main()
{
	int n[100],a,i,j;
	clrscr();

	printf("enter the array size=");
	scanf("%d",&a);

	for(i=0;i<a;i++)
	{
		printf("enter array element n[%d]=",i);
		scanf("%d",&n[i]);
	}
	for(i=0;i<a;i++)
	{
		printf("the squares are:%d\n",n[i]*n[i]);
	}
	getch();
}