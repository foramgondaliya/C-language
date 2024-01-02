#include<stdio.h>
main()
{
    char a[20],*ptr;
    int f=0;
    printf("Enter any string=");
    gets(a);

    ptr=a;

    while (*ptr!=0) 
	{
        ptr++;
        f++;
    }
    printf("The length of a string is=%d",f);

}
