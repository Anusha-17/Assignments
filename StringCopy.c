#include<stdio.h>
void mystrcpy(char s2[20],char s1[20])
{
	int i;
	for(i=0;s1[i]!='\0';i++)
	{
		s2[i]=s1[i];
	}
	s2[i]='\0';
}
void main()
{
	char s1[20],s2[20];
	int i;
	printf("Enter string:\n");
	gets(s1);
	mystrcpy(s2,s1);
	printf("Copied string is:%s",s2);
}
