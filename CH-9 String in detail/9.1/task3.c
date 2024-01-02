
#include<stdio.h>

main()
{
	int i,n;
	char name[50];
	
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
		else if(name[i]>=65 && name[i]<=90)
		{
			name[i]=name[i]+32;
		}
	}
	printf("toggle case string=%s",name);
}
