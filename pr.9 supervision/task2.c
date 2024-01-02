#include <stdio.h>

struct student 
{
    int roll,chem,maths,physics;
    char name[10];
};

void main() 
{
    int i;
    float per,total;
    
    struct student s[5];

    for (i=0;i<5;i++) 
	{
		printf("enter details of student %d=\n",i);
        printf("roll no=");
        scanf("%d",&s[i].roll);
        printf("Name=");
        scanf("%s",&s[i].name);
        printf("chemistry=");
        scanf("%d",&s[i].chem);
        printf("mathematics=");
        scanf("%d",&s[i].maths);
        printf("physics=");
        scanf("%d",&s[i].physics);

        printf("\n");
    }
    for(i=0;i<5;i++)
	{
		printf("Roll no=%d\n",s[i].roll);
		printf("name=%s\n",s[i].name);
		printf("chemistry=%d\n",s[i].chem);
		printf("mathematics=%d\n",s[i].maths);
		printf("physics=%d\n",s[i].physics);
		
		total=(s[i].chem+s[i].maths+s[i].physics);
		printf("total=%.2f\n",total);
		
		per=(total)/3;
		printf("percent=%.2f\n\n",per);
	}
}
	
    
