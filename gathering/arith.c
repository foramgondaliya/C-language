#include<stdio.h>

void main()
{
	int a,b,choice,i;
	
	for(i=choice;i<=0;choice++)
	{	
		
	printf("Press 1 for +\n");
	printf("Press 2 for -\n");
	printf("Press 3 for *\n");
	printf("Press 4 for /\n");
	printf("Press 5 for %%\n");
	printf("Press 0 for the exit\n");
	
		printf("enter your choice=");
		scanf("%d",&choice);
	
		if(choice==0)
		{
			break;
		}
		else if(choice>6)
		{
			printf("Enter valid Numbesr....");
		}
		
		printf("Enter the first number= ");
		scanf("%d",&a);
		printf("Enter the second number= "); 
		scanf("%d",&b);
	
		switch(choice)
		{
			case 1 :
				printf("Addition Of %d and %d is = %d\n\n",a,b,sum(a,b));
				break;
			
			case 2 :
				printf("Substriction Of %d and %d is = %d\n\n",a,b,sub(a,b));
				break;
			
			case 3 :
				printf("multiplication Of %d and %d is = %d\n\n",a,b,multi(a,b));
				break;
			
			case 4 :
				printf("division Of %d and %d is = %d\n\n",a,b,divi(a,b));
				break;
			
			case 5 :
				printf("module Of %d and %d is = %d\n\n",a,b,modul(a,b));
				break;
			
			default :
				printf("Invalid number");
		}
		
	}
}
int sum(int p,int q)
{
	return p + q ;
}

int sub(int p,int q)
{
	return p - q ;
}

int multi(int p,int q)
{
	return p * q ;
}

int divi(int p,int q)
{
	return p / q ;
}

int modul(int p ,int q)
{
	return p % q ;
}
