#include<stdio.h>
struct emp
{
	int eno;
	char ename[20];
	float esal;
};
void main()
{
	struct emp e = {101 , "Anusha" , 150000};
	printf("Employee details:\n");
	printf("Employee No:%d\n",e.eno);
	printf("Employee Name:%s\n",e.ename);
	printf("Employee Salary:%f\n",e.esal);
}
