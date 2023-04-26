#include <stdio.h>
#include <stdlib.h>


struct node
{
	int data;
	struct node *next;
};
struct node *head;

void printLinkedList()
{
	struct node *ptr=head;
		while(ptr!=NULL){
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}
}

void insertAtHead(int new_data)
{
	struct node *new_node = (struct node*)malloc(sizeof(struct node));
	new_node->data=new_data;
	new_node->next=head;
	head=new_node;
}

void insertAtTail(int data)
{
	struct node *new_node = (struct node*)malloc(sizeof(struct node));
	new_node->data=data;
	new_node->next=NULL;
	if(head==NULL){
		new_node=head;
	}else{
		struct node *ptr = head;
		while (ptr->next != NULL){
			ptr = ptr -> next;
		}
		new_node -> next = NULL;
		ptr -> next = new_node;
	}
}



int main()
{
	insertAtHead(100);
	insertAtHead(90);
	printLinkedList();
	return 0;
}


