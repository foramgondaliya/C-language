#include <stdio.h>

struct student 
{
    int id, age, std;
    char name[10],course[20],city[20],schl[20];
};

void main() 
{
    int i,n,c;
    char choice;
    int b;

    printf("how many employees in your company=");
    scanf("%d",&n);

    struct student s[n];

    for (i=0;i<n;i++) {
        printf("enter your id=");
        scanf("%d",&s[i].id);
        printf("enter your name=");
        scanf("%s",&s[i].name);
        printf("enter your age=");
        scanf("%d",&s[i].age);
        printf("enter your course=");
        scanf("%s",&s[i].course);
        printf("enter your city=");
        scanf("%s",&s[i].city);
        printf("enter your standard=");
        scanf("%d",&s[i].std);
        printf("enter your school=");
        scanf("%s",&s[i].schl);

        printf("\n");
    }

    printf("press 1 for id login\n");
    printf("press 2 for age login\n");
    printf("press 3 for standard user login\n");

    printf("enter your choice=");
    scanf(" %c",&choice);

    switch (choice) 
	{
        case '1':
            printf("your choice is id login\n");
            printf("enter your id=");
            scanf("%d", &c);

            for (i=0;i<n;i++) 
			{
                if (s[i].id==c) 
				{
                    printf("ID=%d\n",s[i].id);
                    printf("name=%s\n",s[i].name);
                    printf("age=%d\n",s[i].age);
                    printf("course=%s\n",s[i].course);
                    printf("city=%s\n",s[i].city);
                    printf("standard=%d\n",s[i].std);
                    printf("school=%s\n",s[i].schl);
                }
            }
            break;

        case '2':
            printf("your choice is age login\n");
            printf("press 1 for equal to age login\n");
            printf("press 2 for less than age login\n");
            printf("press 3 for greater than age login\n");
            printf("enter your choice=");
            scanf(" %d",&b);

            switch (b) 
			{
                case 1:
                    printf("press 1 for equal to age login\n");
                    for (i=0;i<n;i++) 
					{
                        if (s[i].age==18) 
						{
                            printf("ID=%d\n",s[i].id);
                            printf("name=%s\n",s[i].name);
                            printf("age=%d\n",s[i].age);
                            printf("course=%s\n",s[i].course);
                            printf("city=%s\n",s[i].city);
                            printf("standard=%d\n",s[i].std);
                            printf("school=%s\n",s[i].schl);
                        }
                    }
                    break;

                case 2:
                    printf("press 2 for less than age login\n");
                    for (i=0;i<n;i++) 
					{
                        if (s[i].age<18) 
						{
                            printf("ID=%d\n",s[i].id);
                            printf("name=%s\n",s[i].name);
                            printf("age=%d\n",s[i].age);
                            printf("course=%s\n",s[i].course);
                            printf("city=%s\n",s[i].city);
                            printf("standard=%d\n",s[i].std);
                            printf("school=%s\n",s[i].schl);
                        }
                    }
                    break;

                case 3:
                    printf("press 3 for greater than age login\n");
                    for (i=0;i<n;i++) 
					{
                        if (s[i].age>18) 
						{
                            printf("ID=%d\n",s[i].id);
                            printf("name=%s\n",s[i].name);
                            printf("age=%d\n",s[i].age);
                            printf("course=%s\n",s[i].course);
                            printf("city=%s\n",s[i].city);
                            printf("standard=%d\n",s[i].std);
                            printf("school=%s\n",s[i].schl);
                        }
                    }
                    break;
            }
            break;

        case '3':
            printf("your choice is standard user login\n");
            printf("press 1 for equal to standard user login\n");
            printf("press 2 for less than standard user login\n");
            printf("press 3 for greater than standard user login\n");
            printf("enter your choice=");
            scanf(" %d",&b);

            switch (b) 
			{
                case 1:
                    printf("press 1 for equal to standard user login\n");
                    for (i=0;i<n;i++) 
					{
                        if (s[i].std==10) 
						{
                            printf("ID=%d\n",s[i].id);
                            printf("name=%s\n",s[i].name);
                            printf("age=%d\n",s[i].age);
                            printf("course=%s\n",s[i].course);
                            printf("city=%s\n",s[i].city);
                            printf("standard=%d0\n",s[i].std);
                            printf("school=%s\n",s[i].schl);
                        }
                    }
                    break;

                case 2:
                    printf("press 2 for less than standard user login\n");
                    for (i=0;i<n;i++) 
					{
                        if (s[i].std<10) 
						{
                            printf("ID=%d\n",s[i].id);
                            printf("name=%s\n",s[i].name);
                            printf("age=%d\n",s[i].age);
                            printf("course=%s\n",s[i].course);
                            printf("city=%s\n",s[i].city);
                            printf("standard=%d\n",s[i].std);
                            printf("school=%s\n",s[i].schl);
                        }
                    }
                    break;

                case 3:
                    printf("press 3 for greater than standard user login\n");
                    for (i=0;i<n;i++) 
					{
                        if (s[i].std>10) {
                            printf("ID=%d\n",s[i].id);
                            printf("name=%s\n",s[i].name);
                            printf("age=%d\n",s[i].age);
                            printf("course=%s\n",s[i].course);
                            printf("city=%s\n",s[i].city);
                            printf("standard=%d\n",s[i].std);
                            printf("school=%s\n",s[i].schl);
                        }
                    }
                    break;
            }
            break;

        default:
            printf("Invalid choice.\n");
    }
}
