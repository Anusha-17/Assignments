#include<stdio.h>
struct abc
{
	int *d;
	char a;
	int b;
}__attribute__((packed));
void main()
{
	struct abc a;
	printf("Size of structure : %d",sizeof(a));
}
