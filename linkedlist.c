#include<stdio.h>
#include<stdlib.h>
typedef struct node node;
struct node{
    int data;
    node *next;
    node *first;
};
node *head=NULL,*tail=NULL;
node *create(int a)
{
    node *te=(node *)malloc(sizeof(node));
    te->data=a;
    te->next=NULL;
    return te;
}
void list(int a)
{
    node *te=create(a);
    node *pt;
    if(!head)
    {
        head->first=NULL;
        head=te;
        tail=head;
        pt=head;
    }
    
    tail->next=te;
    tail=tail->next;
    tail->first=pt;

}
void dis(node *head)
{
    node *tem=head;
    while(tem)
    {
        printf("%d ",tem->data);
        tem=tem->next;
    }
}
void revdis(node *tail)
{
    node *tem=tail;
    while(tem)
    {
        printf("%d ",tem->data);
        tem=tem->first;
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
    dis(head);
    printf("\n");
    revdis(tail);
}