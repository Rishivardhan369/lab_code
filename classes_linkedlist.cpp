#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int a)
    {
        data=a;
        next=NULL;
    }
};
class linkedlist{
    private:
    node *head=NULL,*tail=NULL;
    public:
    void create(int a)
    {
        node *temp=new node(a);
        if(head==NULL)
        {
            head=temp;
            tail=head;
        }
        else
        {
            tail->next=temp;
            tail=tail->next;
        }
    }
    void dis()
    {
        node *temp=head;
        while(temp)
        {
            cout<<temp->data<<endl;
            temp=temp->next;
        }
    }
    void pop()
    {
        if(head==NULL)
        return ;
        if(head->next==NULL)
        {
            head->next==NULL;
            return ;
        }
        node *temp=head;
        while(temp->next!=tail)
        {
            temp=temp->next;
        }
        node *temp1=tail;
        tail=temp;
        tail->next=NULL;
        delete temp1;
    }
};
int main() 
{
    linkedlist link;
    link.create(10);
    link.create(20);
    link.create(30);
    link.create(40);
    link.create(50);
    link.pop();
    link.dis();
}