#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char *mystrcpy(char *dest,const char *src)
{
	int i=0;
	for(i=0;src[i]!='\0';i++)
		dest[i]=src[i];
	dest[i]='\0';
	return dest;
}
int main()
{
	char s1[30],s2[30];
	printf("enter  a string1:");
	fgets(s1,30,stdin);
	printf("enter  a string2:");
	fgets(s2,30,stdin);
	mystrcpy(s2,s1);
	printf("string1 and string2:%s %s",s1,s2);
}
