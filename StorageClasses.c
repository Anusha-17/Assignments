#include<stdio.h>
int a;
void autoclass()
{
	printf("\nDemonstrating auto class\n");
	auto int a=32;
	printf("Value of auto variable a : %d",a);
}
void registerclass()
{
	printf("\n\nDemonstrating register class\n");
	register char c='A';
	printf("Value of register variable c : %d",c);
}
void externclass()
{
	printf("\n\nDemonstrating extern class\n");
	extern int a;
	printf("Value of extern variable a : %d",a);
	a=2;
	printf("\nModified Value of extern variable a : %d",a);
}
void staticclass()
{
	int i=0;
	printf("\n\nDemonstrating static class\n");
	printf("Loop started");
	for(i=1;i<5;i++)
	{
		static int y=5;
		int p=10;
		y++;
		p++;
		printf("\nThe value of y is declared as static in %d iteration is %d\n",i,y);
		printf("The value non-static variable p in %d iterartion is %d\n",i,p);
	}
	printf("Loop ended");
}
void main()
{
	printf("A program to demonstrate storage classes in C\n\n");
	autoclass();
	registerclass();
	externclass();
	staticclass();
}
