#include<stdio.h>
#include<conio.h>

main()
{
	int a[100],b[100],n,m,i,merge[100],k;
	clrscr();

	printf("enter array A's size=");
	scanf("%d",&n);

	printf("enter array A's element=\n");

	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		merge[i]=a[i];
	}
	k=i;
	printf("enter array B's size=");
	scanf("%d",&m);

	printf("enter array B's element=\n");

	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
		merge[k]=b[i];
		k++;
	}
	printf("array c is:\n");
	for(i=0;i<k;i++)
		printf("%d ",merge[i]);
	getch();
}

