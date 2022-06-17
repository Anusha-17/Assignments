#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,n;
	int *ele;
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	ele =(int *)malloc(n*sizeof(int));
	if(ele==NULL)
	{
		printf("Memory is not allocated.\n");
	}
	printf("Enter the %d element\n",n);
	for(i=0;i<n;i++)
	scanf("%d",(ele+i));
	printf("Elements are : \n");
	for(i=0;i<n;i++)
	printf("%d ",*(ele+i));
}
