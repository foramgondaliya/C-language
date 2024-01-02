#include<stdio.h>

int length(char b[]) 
{
    int length=0;
    
	length = strlen(b);
	
    return length;
}

void main() 
{
    char a[100];
    int len;
    
    printf("enter any string= ");
    scanf("%s",&a);

    len = length(a);
    
    printf("length is = %d ",len);
}

