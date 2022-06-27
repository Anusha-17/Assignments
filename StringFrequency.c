#include<stdio.h>
#include<string.h>
int main()
{
	char line[100],ch;
	int i,count=0;
	printf("Enter a string:");
	gets(line);
	printf("Enter a character:\n");
	scanf("%c",&ch);
	for(i=0;i<strlen(line);i++)
	{
		if(ch==line[i])
		count=count+1;
	}
	printf("The frequency of %c is %d.",ch,count);
	return 0;
}

