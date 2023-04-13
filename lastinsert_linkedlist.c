#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head;
void main()
{
	struct node *ptr,*temp;
	int item;
	ptr = (struct node *) malloc(sizeof(struct node *)); 
	if(ptr == NULL)
	{
		printf("\n OVERFLOW");
	}
	else
	{
	    printf("enter the value:\n");
		scanf("%d",&item);
		if(head == NULL)
		{
		   ptr->next = NULL;	
		   head = ptr;
		   printf("Node inserted");
		}
		else
		{
		   temp = head;
		   
		   while(temp -> next != NULL)
		   {
		      temp = temp->next;   	
		   }	
		   temp->next = ptr;
		   ptr->next = NULL;
		   printf("Node inserted");
	    }	
	}
}
