#include<stdio.h>
#include<stdlib.h>
typedef struct node node;
struct node{
	int coef;
	node *next;
};
node *head=NULL;
node *tail=NULL;
node *create(int a)
{
	node *val=(node *)malloc(sizeof(node));
	val->coef=a;
	val->next=NULL;
	return val;
}
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
void display(node *head,int n)
{
	node *temp=head;
	n--;
	while(temp)
	{
		printf("%dx^%d",temp->coef,n--);
		temp=temp->next;
		if(temp!=NULL)
		printf("+");
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
	display(head,n);
}