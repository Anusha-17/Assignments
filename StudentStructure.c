#include<stdio.h>
#include<string.h>
struct student
{
	int rollno;
	char name[20];
};
void main()
{
	int i;
	struct student st[5];
	printf("Enter records of 5 students\n");
	for(i=0;i<5;i++)
	{
		printf("Enter Rollno:");
		scanf("%d",&st[i].rollno);
		printf("Enter Name:");
		scanf("%s",&st[i].name);
    }
    printf("\nStudent Information list:\n");
    for(i=0;i<5;i++)
    {
    	printf("\nRollno:%d, Name:%s",st[i].rollno,st[i].name);
    }
}
