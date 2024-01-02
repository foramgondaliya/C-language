#include<stdio.h>
#include<conio.h>

main()
{
int a,b,c;
clrscr();

	printf("enter the value of a=");
	scanf("%d",&a);

	printf("enter the value of b=");
	scanf("%d",&b);

	printf("enter the value of c=");
	scanf("%d",&c);

	if(a==b && a==c)
	{
	      printf("all values are same");
	}
	else if(a==b)
	{
	printf("a and b are same");
	}
	else if(b==c)
	{
	printf("b and c are same");
	}
	else if(a==c)
	{
	printf("a and c are same");
	}

      else if(a<b)
	{
	  if(a<c)
	      {
	    printf("a is minimum");
	      }
	  else
	 {
	    printf("c is minimum");
	    }
	    }
      else if(b<c)
      {
	   printf("b is minimum");
      }
	else
      {
	   printf("c is minimum");
      }



	getch();
	return 0;

}



