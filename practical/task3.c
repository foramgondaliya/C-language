#include<stdio.h>

main()
{
	FILE *ptr;
	int first,last,i;
	
	ptr=fopen("write.txt","w");
	
	if(ptr==NULL)
	{
		printf("this file can't be created/open");
	}
	else
	{
		printf("file created/opened successfully");
		
		printf("enter the first year=");
		scanf("%d",&first);
		
		printf("enter the last year=");
		scanf("%d",&last);
		
		for(i=first;i<=last;i++)
		{
			if(i%4==0)
			{
				fprintf(ptr,"%d\n",i);
			}
		}	
		
	}
}

