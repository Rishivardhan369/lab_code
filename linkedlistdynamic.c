#include<stdio.h>
#include<stdlib.h>
typedef struct node node;
struct node{
	int data;
	node *next;
};
node *head=NULL;
node *tail=NULL;
//creating a node 
node *create(int a)
{
	node *val=(node *)malloc(sizeof(node));
	val->data=a;
	val->next=NULL;
	return val;
}
//for inserting the elements in the linked list
void list(int a)
{
	node *val=create(a);
	if(head==NULL)
	{
		head=val;
		tail=val;
	}
	else
	{
		tail->next=val;
		tail=tail->next;
	}
}
//for displaying the linked list
void display(node *head)
{
	node *temp=head;
	while(temp)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int a;
		scanf("%d",&a);
		list(a);
	}
	display(head);
	int d;
	scanf("%d",&d);
	delete(d);
}