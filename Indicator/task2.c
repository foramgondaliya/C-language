#include <stdio.h>
swap(int*x,int*y) 
{
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
}
int main()
{
    int a,b;

    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);

    swap(&a,&b);
    
    printf("x=%d\n",a);
    printf("y=%d\n",b);


}
