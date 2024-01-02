#include<stdio.h>

struct employee
{
	int id,age;
	char name[10],role[20],city[20],exp[10],compname[20];	
};
void main()
{
	int i,n;
	
	printf("how many employee in your company=");
	scanf("%d",&n);
	
	struct employee s[n];
	
	for(i=0;i<n;i++)
	{
		printf("enter your id=");
		scanf("%d",&s[i].id);
		printf("enter your name=");
		scanf("%s",&s[i].name);
		printf("enter your age=");
		scanf("%d",&s[i].age);
		printf("enter your role=");
		scanf("%s",&s[i].role);
		printf("enter your city=");
		scanf("%s",&s[i].city);
		printf("enter your experience=");
		scanf("%s",&s[i].exp);
		printf("enter your company name=");
		scanf("%s",&s[i].compname);
		
		printf("\n");
	}
	
	for(i=0;i<n;i++)
	{
		printf("ID=%d\n",s[i].id);
		printf("name=%s\n",s[i].name);
		printf("age=%d\n",s[i].age);
		printf("role=%s\n",s[i].role);
		printf("city=%s\n",s[i].city);
		printf("experience=%s\n",s[i].exp);
		printf("company name=%s\n",s[i].compname);
	}
}

