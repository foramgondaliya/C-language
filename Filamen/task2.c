
#include<stdio.h>
main()
{
	char name[100],i;
	int j,temp;
	
	printf("Enter any String : ");
	gets(name);
	
	printf("Frequency of each letter=\n");
	
	for(i='A';i<='Z';i++)
	{
		temp = 0;
		for(j=0;j<strlen(name);j++)
		{
			if(i==name[j])
			{
				temp++; 
			}
		}
		if(temp>0)
		{
			printf("'%c' --> %d \n",i,temp);
		}
	}
	for(i='a';i<='z';i++)
	{
		temp = 0;
		for(j=0;j<strlen(name);j++)
		{
			if(i==name[j])
			{
				temp++; 
			}
		}
		if(temp>0)
		{
			printf("'%c' --> %d \n",i,temp);
		}
	}
}

	
