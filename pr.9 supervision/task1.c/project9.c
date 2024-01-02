#include<stdio.h>

main()
{
	FILE *ptr,*ptr2;
	int i;
	
	ptr=fopen("even.txt","w");
	ptr2=fopen("odd.txt","w");
	
	if(ptr==NULL)
	{
		printf("this file can't be created/opened");
	}
	else
	{
		printf("file opened successfully");
		
		for(i=50;i<70;i++)
		{
			if(i%2==0)
			{
				fprintf(ptr,"%d\n",i);
			}
			else
			{
				fprintf(ptr2,"%d\n",i);
			}
		}
		
	}
	
	
}


