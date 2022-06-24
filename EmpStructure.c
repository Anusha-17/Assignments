#include<stdio.h>
struct emp
{
	int eno;
	char ename[20];
	float esal;
};
void main()
{
	struct emp e;
	printf("Size of Emp:%d",sizeof(e));
	printf("Size of Emp:%d",sizeof(struct emp));
}
