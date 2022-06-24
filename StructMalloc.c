#include<stdio.h>
#include<stdlib.h>
struct emp
{
	int eno;
	char ename[20];
	float esal;
};
void main()
{
	struct emp* ptr;
	ptr=(struct emp*)malloc(sizeof(struct emp*));
	if(ptr==NULL)
	{
		printf("Memory is full.");
	}
	else
	{
		printf("Enter employee details:\n");
		scanf("%d %s %f",&ptr->eno,ptr->ename,&ptr->esal);
		printf("Employee no:%d\nEmployee Name:%s\nEmployee Salary:%f",ptr->eno,ptr->ename,ptr->esal);	
	}
}
