#include<stdio.h>

main()
{
	int i,upper=0,special=0,digit=0,special2=0,special3=0,len;
	char pass[30];
	
  	printf("Create your password=");
	gets(pass);
	
 	len=strlen(pass);
	
	for(i=0;i<len;i++)
	{
		if(pass[i]>=65 && pass[i]<=90)
		{
			upper=1;
		}
		else if(pass[i]>=48 && pass[i]<=57)
		{
			digit=1;
		}
		else if(pass[i]>=33 && pass[i]<=47)
		{
			special=1;
		}
		else if(pass[i]>=123 && pass[i]<=126)
		{
			special2=1;
		}
		else if(pass[i]>=91 && pass[i]<=96)
		{
			special3=1;
		}
	}
	if(upper==1 && digit==1 && (special==1 || special2==1 || special3==1) && len>=6)
	{
		printf("your password is strong");
	}
	else
	{
		printf("your password is not strong");
	}
}
