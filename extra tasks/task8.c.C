#include<stdio.h>
#include<conio.h>

main()
{
	int num,temp,sum=0,rev=0,multi;
	clrscr();

	printf("enter the number=");
	scanf("%d",&num);

	temp=num;
	while(temp>0)
	{
		sum=sum+temp%10;
		temp=temp/10;
	}
	temp=sum;
	printf("digit sum=%d\n",temp);

	while(temp>0)
	{
		rev=rev*10+temp%10;
		temp=temp/10;

		printf("the reverse number of sum=%d\n",rev);
		printf("the product of %d*%d=%d\n",sum,rev,rev*sum);
	}
	if(rev*sum==num)
	{
		printf("this number is magic number=%d\n",num);
	}
	else
	{
		printf("this number is not magic number=%d\n",num);
	}
getch();
}