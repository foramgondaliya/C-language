
#include <stdio.h>

main()
{
    char name[100],name2[100];  
    int i=0,n=0,j=0,f=0;
 
    printf("Enter any string : ");
    scanf("%s",&name);
    
    for(i=0;name[i]!='\0';i++)
    {
    	j++;
	}

    for(i=j-1;i>=0;i--)  
    {
    	name2[n++]=name[i];
 	}
 	
 	for(i=0;i<=j;i++)
 	{
 		if(name[i]!=name2[i])
 		{
 			f=1;
 			break;
		}
	}
 		
 	if(f==0)
 	    printf("Given string is a palindrome");
    else
        printf("given string is not palindrome");
 
}
