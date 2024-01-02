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
		if(name[i]>=65 && name[i]<=90)
		{
			name[i]=name[i]+32;
		}
	}
	printf("lowercase string=%s",name);	
	
}
