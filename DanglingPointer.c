#include<stdio.h>
#include<stdlib.h>  
int main()  
{  
   int *ptr=(int *)malloc(sizeof(int));  
   int a=560;  
   ptr=&a; 
   printf("%d\n",*ptr); 
   free(ptr);
   printf("%d",ptr);  // here ptr acts as a dangling pointer
    // prints garbage value in the output console
   return 0;  
}  
