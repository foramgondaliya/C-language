#include<stdio.h>

main()
{
	int n,i;
	char name[30];
	
	printf("enter the length of string=");
	scanf("%d",&n);
	
	printf("enter any string=");
	scanf("%s",&name);
	
	for(i=0;i<n;i++)
	{
		if(name[i]>=97 && name[i]<=122)
		{
			name[i]=name[i]-32;
		}
	}
	printf("Uppercase string=%s",name);
	
	
}
