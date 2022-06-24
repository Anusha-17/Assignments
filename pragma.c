#include<stdio.h>
#pragma pack(1)
struct abc
{
	char a; // 1 byte
	int b; // 4 bytes
};
void main()
{
	struct abc a;
	printf("Size of structure : %d",sizeof(a));
}
