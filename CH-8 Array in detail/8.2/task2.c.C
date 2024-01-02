#include<stdio.h>
#include<conio.h>

main()
{
	int start,end,num,even[100],i;
	clrscr();

	printf("enter the start year=");
	scanf("%d",&start);

	printf("enter the end year=");
	scanf("%d",&end);

	if(start%2!=0)
	start++;

	num=(end-start)/2+1;
	even[num];

	for(i=0;i<num;i++)
	even[i]=start+2*i;

	printf("even years between %d and %d are\n",start,end);
	for(i=0;i<num;i++)
	{
		printf("%d ",even[i]);
	}
	getch();
}