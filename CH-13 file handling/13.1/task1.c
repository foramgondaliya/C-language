#include<stdio.h>

main()
{
	FILE *ptr;
	int i;
	
	ptr=fopen("dummy.txt","w");
	
	if(ptr==NULL)
	{
		printf("this file can't be created/opened");
	}
	else
	{
		printf("file created/opened successfully");
		
		for(i=1;i<=50;i++)
		{
			if(i%3==0 && i%5==0)
			{
				fprintf(ptr,"this number is divisible by 3 and 5=%d\n",i);
			}	
		}
		
		
	}
}
