#include<stdio.h>

main()
{
   int n,i,a[20];
   int *ptr;

   ptr=&a[i];

   printf("Enter the array's size =");
   scanf("%d",&n);

   printf("enter array's element=\n");
   for (i=0;i<n;i++)
   {
      printf("a[%d]=",i);
      scanf("%d",&a[i]);
   }
   ptr=&a[i-1];

	printf("reversed array element=\n");
   for (i=n;i>0;i--)
    {
      printf("%d ",*ptr);
      ptr--;
   }
}
