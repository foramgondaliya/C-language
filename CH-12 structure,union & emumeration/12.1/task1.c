#include<stdio.h>

struct student
{
	int id,age;
	char std[5],name[10],school[20],city[20],course[10];
};

void main()
{
	struct student s1,s2,s3;
	
	s1.id=5121;
	strcpy(s1.name,"foram");
	s1.age=17;
	strcpy(s1.course,"Flutter");
	strcpy(s1.city,"rajkot");
	strcpy(s1.std,"12th");
	strcpy(s1.school,"red & white");
	
	printf("ID=%d\n",s1.id); 
	printf("name=%s\n",s1.name); 
	printf("age=%d\n",s1.age); 
	printf("course=%s\n",s1.course); 
	printf("city=%s\n",s1.city); 
	printf("std=%s\n",s1.std); 
	printf("school=%s\n\n",s1.school); 
	
	s2.id=5119;
	strcpy(s2.name,"veera");
	s2.age=8;
	strcpy(s2.course,"Flutter");
	strcpy(s2.city,"rajkot");
	strcpy(s2.std,"5th");
	strcpy(s2.school,"red & white");
	
	printf("ID=%d\n",s2.id); 
	printf("name=%s\n",s2.name); 
	printf("age=%d\n",s2.age); 
	printf("course=%s\n",s2.course); 
	printf("city=%s\n",s2.city); 
	printf("std=%s\n",s2.std); 
	printf("school=%s\n\n",s2.school); 
	
	s3.id=5273;
	strcpy(s3.name,"krupali");
	s3.age=8;
	strcpy(s3.course,"Flutter");
	strcpy(s3.city,"rajkot");
	strcpy(s3.std,"2nd");
	strcpy(s3.school,"red & white");
	
	printf("ID=%d\n",s3.id); 
	printf("name=%s\n",s3.name); 
	printf("age=%d\n",s3.age); 
	printf("course=%s\n",s3.course); 
	printf("city=%s\n",s3.city); 
	printf("std=%s\n",s3.std); 
	printf("school=%s\n",s3.school); 
}
