#include <stdio.h>
 
 int sum2(int a[],int n)
 {
 	int i,sum=0;
 
    for(i=0; i<n; i++)
    {
         sum=sum+a[i];
         
    }
 	return sum;
 }
int main()
{
    int a[100],i,n,sum;
   
    printf("Enter array size : ");
    scanf("%d", &n);
 
    printf("Enter array elements :\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
 
    sum=sum2(a,n);
    printf("sum of array is :%d",sum);
 
}
