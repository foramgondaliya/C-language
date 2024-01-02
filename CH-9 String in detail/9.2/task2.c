#include<stdio.h>

main()
{
	char correctemail[]="admin@gmail.com";
	char correctpassword[]="123456";
	
	char enteredemail[20];
	char enteredpassword[20];
	
	printf("enter your email=");
	scanf("%s",enteredemail);
	
	printf("enter your password=");
	scanf("%s",enteredpassword);
	
	if(strcmp(enteredemail,correctemail)==0 && strcmp(enteredpassword,correctpassword)==0)
	{
		printf("login successful");
	}
	else
	{
		printf("Login failed. Invalid Credentials");
	}
}
