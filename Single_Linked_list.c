#include<stdio.h>  
#include<stdlib.h>  
struct node   
{  
    int data;  
    struct node *next;   
};  
struct node *head;
void insert();
void display(); 
void main()
{
	int ch;
	while(ch!=3)
	{
		printf("\n1.Insert 2.Display 3.Exit\n");
		printf("\nEnter your choice:\n");
		scanf("%d",&ch);
		switch(ch)
		{		
		case 1:insert();
		       break;
		case 2:display();
		       break;
	    case 3:exit(0);
		       break;
	    default: printf("Invalid choice");       
	}
} 
}
void insert()
{
	struct node *ptr;  
    int item;  
    ptr = (struct node *) malloc(sizeof(struct node *));  
    if(ptr == NULL)  
    {  
        printf("\nOVERFLOW");  
    }  
    else  
    {  
        printf("\nEnter value\n");    
        scanf("%d",&item);    
        ptr->data = item;  
        ptr->next = head;  
        head = ptr;  
        printf("\nNode inserted\n");  
    }  
}
void display()
{
	struct node *ptr;  
    ptr = head;   
    if(ptr == NULL)  
    {  
        printf("List is empty");  
    }  
    else  
    {  
        printf("\nValues :\n");   
        while (ptr!=NULL)  
        {  
            printf("\n%d",ptr->data);  
            ptr = ptr -> next;  
        }  
    }  
}
